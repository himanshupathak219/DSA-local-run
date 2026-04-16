//BRUTE FORCE APPROACH -----IT WILL GIVE THE MAXIMUM SUBARRAY SUM OF AN ARRAY 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int current_sum=0;
    int macs=INT_MIN;
    for(int st=0;st<=5;st++){
        for(int end=st;end<=5;end++){
            current_sum=current_sum+arr[end];
            macs=max(current_sum,macs);

        }
    }
    cout<<macs;
    return 0;
}

