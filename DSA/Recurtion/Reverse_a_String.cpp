//Reverse a string 
#include<bits/stdc++.h>
using namespace std;

int reverseString(string &str,int s , int e){

  //Base Case
  if(s==e){
    return 0;
  }
  swap(str[s],str[e]);
  return reverseString(str , s+1 , e-1);
  
}
int main(){
  string str;
  cout<<"Enter the String : ";
  cin>>str;
  int e=str.size()-1;
  int s=0;
  reverseString(str,s,e);
  cout<<str;
  return 0;
}