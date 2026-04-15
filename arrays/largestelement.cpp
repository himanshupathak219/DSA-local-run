#include<iostream>
using namespace std;

int main(){
    int arr[5];
 
    for( int i=0;i<=4;i++){
        cout<<"enter "<<i+1<<" element in array"<<endl;
        cin>>arr[i];
    }
       int largestelement=arr[0];
       for( int i=0;i<=4;i++){
        if( largestelement<arr[i+1]){
            largestelement=arr[i+1];
        }
       }
       cout<<"largest  element = "<<largestelement;
       return 0;
}