#include<iostream>
using namespace std;
int main(){
   
int arr[]={2,5,4,6,8,7}; 

 int n =sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<=n-1 ; i++){
    cout << arr[i] <<" ";
}

return 0;
}