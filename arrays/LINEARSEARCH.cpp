#include<iostream>
using namespace std;

int main(){

    int arr[]={4,2,7,8,1,2,5};
    int check;
    int index;
    for( int i=0;i<=6;i++){
        if( arr[i]==8){
            check=0;
            index=i;
            break;
        }
        else{
            check=1;
        }
    }
    if( check==0){
        cout<<index;

    }
    else if( check==1){
        cout<<"target not found ";
    }
    return 0;

}