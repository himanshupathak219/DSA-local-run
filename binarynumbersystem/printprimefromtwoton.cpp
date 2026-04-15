#include<iostream>
using namespace std;


int isprime(int p){
    
    
    for(  int i=2;i<=p-1;i++){
        if( p%i==0){
            break;
        }
        
        cout<<p<<" ";
        break;
       
    }
}


void printprime(int n){
    for( int i=2;i<=n;i++){
        isprime(i);
    }
}


int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;

    printprime(n);

    return 0;
}