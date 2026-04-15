#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={3,4,5,6};
    for(int i=0;i<=3;i++){
        int p=arr1[i];
        for( int j=0;j<=3;j++){
            if(arr2[j]==p){
                cout<<p<<" ";
                break;
            }

        }
        


    }
    return 0;
}