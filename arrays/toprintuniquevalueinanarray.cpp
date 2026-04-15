//WAF TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY
#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,2,4,1,5,6,5,6};
    int size=9;
   
    for(int i=0;i<=size;i++){
          bool check=true;
        int p=arr[i];
        for(int j=0;j<=size;j++){
            if(i!=j){
                if(arr[j]==p){
                    check=false;
                    break;

                }

            }
          

        }
          if(check==true){
                cout<<p<<" ";
            }
       

    }
    return 0;
}