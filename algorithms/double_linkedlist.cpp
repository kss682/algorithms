#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *front;
    Node *back;
}*HEAD=NULL;


void insert(int value){
    Node *temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->front = NULL;
    temp->back = NULL;
    
    if(HEAD == NULL){
        HEAD = temp;   
    }
    else{
        Node *ptr;
        ptr = HEAD;
        while(ptr->front != NULL){
            ptr = ptr->front;
        }
        ptr->front = temp;
        temp->back = ptr;
    }  
}


void delete_value(int value){
    

}


void print(){
    Node *temp;
    temp = HEAD;
         
}

int main(){
    int ch = 0, value;
    while(ch != 4){
        cout<<"Enter the choice\n1.Insert\n2.Delete\n3.Print\n";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter the value to be inserted: ";
                    cin>>value;
                    insert(value);
                    break;
            case 2: cout<<"Enter the value to be deleted: ";
                    cin>>value;
                    delete_value(value);
                    break;
            case 3: print_list();
        }
    }

}
