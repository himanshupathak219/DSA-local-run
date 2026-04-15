#include<iostream>
using namespace std;


void fibonacci( int n){
    if( n>=0){
        cout<<"0 ";
    }
    if( n>=1){
        cout<<"1 ";
    }
    int fn=0;int sn=1;
    for( int i=3;i<=n;i++){
        int third_number=fn+sn;
        cout<<third_number<<" ";
        fn=sn;
        sn=third_number;
    }
}

int main(){

    fibonacci(7);

    cout<<endl;
    fibonacci(15);

    return 0;
}