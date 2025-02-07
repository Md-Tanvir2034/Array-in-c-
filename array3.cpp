#include<iostream>
using namespace std;
int main(){
int n;
cout <<"Enter Array space :";
 cin>> n;
 int a[n];

cout<<"Enter  value : " ;
 for( int i=0 ; i<n ; i++){
    cin >> a[i];
 }

 int min_number = a[0];

 for( int i= 0 ; i<n ; i++){
    if (min_number > a[i]){
        min_number= a[i];
    
    }
 }

 cout <<" Minmum number : " << min_number << endl ;

return 0;
}