#include<iostream>
using namespace std;
int main(){
int a[3]={4, 7, 9};

cout << "Your Value is : ";
for(int i=0 ; i<=2 ; i++){
cout<< a[i] <<", ";
} 

cout<< endl;

cout << "Your opposite Value is : ";
for(int i=2 ; i>=0 ; i--){
cout<< a[i] <<", ";
} 

return 0;
}