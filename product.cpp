#include<iostream>
using namespace std;
int main(){
int product= 1 ; 
int arr[]={2,5,4}; 

 int n =sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<=n-1 ; i++){
 
  product *=arr[i];
}
cout<< product;

return 0;
}