#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ll i,T,N,j;
  string str;
  cin>>T;
  for(i=1;i<=T;i++){
    cin>>N>>str;
    for(j=0;str[j]!='\0';j++){
      str[j] = str[j] == 'E'? 'S' : 'E';
    }
    cout<<"Case #"<<i<<": "<<str<<endl;
  }
}
