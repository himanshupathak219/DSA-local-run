#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int index;
 
    for( int i=0;i<=4;i++){
        cout<<"enter "<<i+1<<" element in array"<<endl;
        cin>>arr[i];
    }
       int smallestelement=arr[0];
       for( int i=0;i<=4;i++){
        if( smallestelement>arr[i+1]){
            smallestelement=arr[i+1];
             index=i+1;
        }
       }
       cout<<"smallest element = "<<smallestelement<<endl;
       cout<<index;

       return 0;
}