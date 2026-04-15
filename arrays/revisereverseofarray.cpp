#include<iostream>
using namespace std;
void swap(int arr[],int size){
    int start=0;
    int end=8;
    for( int i=0;start<=end;i++){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }

for( int i=0;i<=size-1;i++){
    cout<<arr[i]<<" ";
}
return ;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;

    swap(arr,size);
    return 0;
}