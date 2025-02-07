#include<iostream>
using namespace std;
int main(){
int sum= 0  ; 
int arr[]={2,5,4,6,8,7}; 

 int n =sizeof(arr)/sizeof(arr[0]);
int x;
cout<<"Enter your target: ";
cin>>x;
for(int i=0 ; i<= n-1 ; i++){

if(arr[i]==x){
    cout<< x <<" Is present ";
  break;
}


}

return 0;
}