#include<iostream>
#define n 6
using namespace std;

int main(void){
    // int n ;
    // cout<<"Enter the size of array : ";
    // cin>>n;

    int values[n];
     int index;

    
    for(index=0; index<n; index++){
         cout<<"Enter the value for index "<<index<<" : ";
         cin>>values[index];
     } 

    for(index=0; index<n; index++){
        cout << "value at index "<<index<<" is : "<<values[index]<<endl;
    }

    return 0;
}