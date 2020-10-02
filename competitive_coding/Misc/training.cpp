#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for (i = 0; i < n; ++i)
using namespace std;
typedef long long ll;
int Select(vector<int> Skill,ll P,ll N){
  ll J = N-1,i,sum;
  int hours,small = -1;
  while(J-P+1>=0){
    hours = 0;
    sum = 0;
    for(i= 1;i<P;i++){
        sum += Skill[J-i];
    }
    hours = (P-1)*Skill[J] - sum;
    small = small == -1?hours:(small>hours?hours:small);
    J--;
  }
   return small;
}
int main(){
  std::cin.sync_with_stdio(false);
  ll N,P;
  int T,i,j,input,hours;
  std::cin>>T;
  for(i = 1;i<=T;i++){
    vector<int> Skill;
    std::cin>>N>>P;
    rep(j,N){
      std::cin>>input;
      Skill.push_back(input);
    }
    sort(Skill.begin(),Skill.end());
    hours = Select(Skill,P,N);
    std::cout<<"Case #"<<i<<": "<<hours<<'\n';
  }
}
