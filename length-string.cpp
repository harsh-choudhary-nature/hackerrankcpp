#include<iostream>
#include<cstring>
using namespace std;
int stLength(string s){
  int len=0;
  for(int i=0;s[i]!='\0';i++){  //string are character arrays that terminate by end of string character
    len++;
  }
 return len;
}
int main(){
  string str="harsh";
  cout<<stLength(str);
  return 0;
}
