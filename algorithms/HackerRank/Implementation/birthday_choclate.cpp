#include <iostream>
#include <vector>
using namespace std;

int main(){
  std::cin.sync_with_stdio(false);
  int N,m,d,i,j,count;
  std::cin>>N;
  vector<int> bar(N);
  for(i=0;i<N;i++){
    std::cin>>bar[i];
  }
  std::cin>>d>>m;
  count = 0;
  int Sum = 0;
  for(i=0;i<=N-m;i++){
    j=0;
    Sum = 0;
    while(j<m){
      Sum += bar[i+j];
      j++;
    }
    if (Sum == d) {
      count++;
    }
  }
std::cout<<count<<endl;
}
