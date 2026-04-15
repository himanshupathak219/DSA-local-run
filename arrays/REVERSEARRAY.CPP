#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int start=0;int end=(sizeof(arr)/sizeof(arr[0]))-1;
    while( start<=end){
        swap( arr[start],arr[end]);
        start++;
        end--;

    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}