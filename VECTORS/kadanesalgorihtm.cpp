//USING KADANES ALGORITHM TO FIND THE MAXIMUM SUM OF THE SUBARRAY OF AN ARRAY
#include<iostream>
#include<climits>

using namespace std;

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int currentSum=0;
    int maxNumber=INT_MIN;
    for(int i=0;i<=(sizeof(arr)/sizeof(arr[2]))-1;i++){
        currentSum+=arr[i];
        maxNumber=max(currentSum,maxNumber);
        if(currentSum<0){
            currentSum=0;
        }


    }
    cout<<maxNumber;
    return 0;
}