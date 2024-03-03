//Find last occurence of any character in an string input - absjdsddsdf , d output :- 10

#include<bits/stdc++.h>
using namespace std;

int findkey(string & s , char key , int i , int &ans){
  if(i<0){
    return 0;
  }
  if(s[i]==key){ //last se search karna suru krenge jo sabse pehle milega wahi hoga last input
    ans=i;
    return ans;
  }
  return findkey(s,key,i-1,ans);
}
int main(){
  string s ;
  cout<<"Enter string : ";
  cin>>s;
  char key;
  cout<<"Enter Key You want to search : ";
  cin>>key;
  int i=s.size();
  int ans = -1;
  ans = findkey(s,key , i,ans);
  cout<<"Key present on : "<<ans<<" Index";
  return 0;
}