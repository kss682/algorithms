#include <iostream>
#include <string>

using namespace std;

string str1,string_stk = " ",substring = " ";
/*
void push(char val){
  if(TOP == MAX-1){
    std::cout<<"overflow\n";
  }
  else{
    TOP++;
    VALUE[TOP] = val;
  }
}
*/
string repeat(string s,int n){
  int j;
  //std::cout << n << '\n';
  string s1 = s;
  for(j=1;j<n;j++){
    s = s + s1;
  }
//  std::cout<<s<<'\n';
  return s;
}

int main(){
string temp;
std::cin>>str1;
std::cout<<str1<<endl;
int len = str1.size(),i,num;
i = len-1;
while(i>=0){
  /*if(isdigit(str1[i]) != 0){
    push(str[i]);
  }*/
 if(str1[i] == ']'){
   if(substring.size() != 0){
     temp = substring + string_stk;
     string_stk  = temp;
     substring = " ";
   }
  }
  else if(str1[i] == '['){
    num = str1[i-1] - '0';
    substring = repeat(substring,num);
  }
  else if(str1[i] >= 'a' && str1[i] <= 'z'){
    temp = str1[i] + substring;
    substring = temp;
  }
  i--;

}
temp = substring + string_stk;
string_stk  = temp;
std::cout<<string_stk<<"\n"<<endl;
return 0;
}
