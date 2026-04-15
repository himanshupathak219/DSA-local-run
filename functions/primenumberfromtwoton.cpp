#include<iostream>
using namespace std;


int checkprime( int p){
    bool check=true;
    for( int i=2;i<=p/2;i++){
        if( p%i==0){
            check=false;
        }
        
    }
    if( check==true){
        cout<<p<<" ";
    }

}


void printprime(int n){
    for( int i=2;i<=n;i++){
        checkprime(i);
        
    }
}

int main(){

    int n;
    cout<<"enter a number :";
    cin>>n;

    printprime(n);
    return 0;
}