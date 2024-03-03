//Binary Search in Recurtion
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v ,  int s , int e , int key){
    int mid = s+(e-s)/2;
    //Base Case 
    if(key == v[mid]){
        return mid;
    }
    if(v[mid]>key){
        int ans = binarySearch(v,s,mid-1,key);
        return ans;
    }
    else{
        int ans = binarySearch(v,mid+1,e,key);
        return ans;
    }
    return -1; //If answer not found
}
int main(){
    vector<int> v{10,20,30,40,50,60}; 
    int n = v.size();
    int s = 0;
    int e = n-1;
    int key = 40;
    int ans = binarySearch(v , s , e , key);
    cout<<"Asnwer is : "<<ans<<endl;
    return 0;
}