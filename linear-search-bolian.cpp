#include<iostream>
using namespace std;
int main(){
int sum= 0  ; 
int arr[]={2,5,4,6,8,7}; 

 int n =sizeof(arr)/sizeof(arr[0]);
int x;
cout<<"Enter your target: ";
cin>>x;

bool flag= false ; //false means absent
for(int i=0 ; i<= n-1 ; i++){

  if(arr[i]==x){
   flag = true ; //true means present
  break;
  }
}
if( flag == true) cout<< x << " is present";
else cout<< x << " is not present" ;

return 0;
}