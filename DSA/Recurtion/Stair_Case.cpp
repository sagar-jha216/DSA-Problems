//Stairs case leet code q-75
#include<bits/stdc++.h>
using namespace std;

int find_way(int n){
if(n==0 || n==1){
return 1;
}
int x= find_way(n-1)+find_way(n-2);
cout<<x<<endl;
return x;
}

int main(){
    cout<<"Enter value of n : ";
    int n ;
    cin>>n;
    int result=find_way(n);
    cout<<"Total number of way : " <<result<<endl;
    return 0;
}