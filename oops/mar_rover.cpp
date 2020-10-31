#include<bits/stdc++.h>
using namespace std;

class Grid{
    int N, M;
    public:
        Grid(){
            this->N = 0;
            this->M = 0;
        }
        
        Grid(int N, int M){
            this->N = N;
            this->M = M;
        }
        
        int y_max(){ return this->M;}
        int x_max(){ return this->N;}
};


class MarsRover{
    int x, y;
    char dir;
    Grid g;
 
    void rotate(char ch){
        if(ch == 'L'){
            switch(this->dir){
                case 'N': this->dir = 'W';
                          break;
                case 'E': this->dir = 'N';
                          break;
                case 'W': this->dir = 'S';
                          break;
                case 'S': this->dir = 'E';
             }
        }
        else{
            switch(this->dir){
                case 'N': this->dir = 'E';
                          break;
                case 'E': this->dir = 'S';
                          break;
                case 'W': this->dir = 'N';
                          break;
                case 'S': this->dir = 'W';
             }
        
        }
    }
    
    void move(){
        if(this->dir == 'N' && this->y + 1 <= this->g.y_max()) this->y++;
        else if(this->dir == 'S' && this->y - 1 >= 0) this->y--;
        else if(this->dir == 'E' && this->x + 1 <= this->g.x_max()) this->x++;
        else if(this->dir == 'N' && this->x - 1 >= 0) this->x--;
        else cout<<"Rover reached max limit \n";
    }
    
    public:
        MarsRover(int x, int y, char ch, Grid gr){
            this->x = x;
            this->y = y;
            this->dir = ch;
            this->g = gr;
            
        }
        
        void view_pos(){
            cout<<this->x<<"\t"<<this->y<<"\t"<<this->dir<<"\n";
        }
        
        void move_rover(string str){
            for(auto itr = str.begin(); itr != str.end(); itr++){
            if(*itr == 'L' || *itr == 'R') rotate(*itr);
            else move();
            }
            view_pos();
        }

};


int main(){
    char ch;
    int N, M, rover_count;
    cout<<"Enter the Grid Size \n";
    cin>>N>>M;
    Grid g(N, M);
    cout<<"Enter no of rovers deployed\n";
    cin>>rover_count;
    for(int i = 0; i < rover_count; i++){
        cout<<"rover "<<i+1<<"\n";
        int X, Y;
        char ch;
        cout<<"Enter rover position\n";
        cin>>X>>Y>>ch;
        MarsRover rover(X, Y, ch, g);
        cout<<"Enter direction string \n";
        string str;
        cin>>str;
        rover.move_rover(str);
    }
}
        
        
