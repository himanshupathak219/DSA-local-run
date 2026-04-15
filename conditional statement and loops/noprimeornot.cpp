#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number :";
    cin>>n;
    if(n==2){
        cout<<"prime";
        return 0;
    }

    int i=1;

    for( int i=2;i<=n-1;i++){
        if( n%i==0){
            i=2;
            
        }
        
        break;
          
    }
    if( i==1){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }


  
    return 0;
}