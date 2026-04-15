#include<iostream>
using namespace std;

int sum( int arr[],int size){
    int sum=0;
    for( int i=0;i<=size-1;i++){
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum<<endl;
    return 0;

}

int product( int arr[],int size){
    int product=1;
    for( int i=0;i<=size-1;i++){
        product=product*arr[i];
    }
    cout<<"product = "<<product<<endl;
    
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;

    sum(arr,size);
    product(arr,size);
    return 0;
}