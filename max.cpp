#include<iostream>
using namespace std;
int main(){
int sum= 0  ; 
int arr[]={2,5,4,6,8,7}; 
int n= sizeof(arr)/sizeof(arr[0]);
int mx = arr[0];
int mn = arr[0];

for(int i=1 ; i<n ; i++){
   if(mx < arr[i]){
    mx = arr[i] ;
   }

}
for(int i=1 ; i<n ; i++){
   if(mn > arr[i]){
    mn = arr[i] ;
   }

}

cout<<"Your max number: " << mx <<endl ;
cout<<"Your min number: " << mn ;
return 0;
}