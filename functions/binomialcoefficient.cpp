#include<iostream>
using namespace std;

void binomialcoeff(  int n,int r){
    int fact1=1,fact2=1,fact3=1;
    for( int i=1;i<=n;i++){
        fact1=fact1*i;
    }
      for( int i=1;i<=r;i++){
        fact2=fact2*i;
    }
      for( int i=1;i<=n-r;i++){
        fact3=fact3*i;
    }
    cout<<"binomial coeff of "<<n<<"C"<<r<<" = "<<fact1/(fact2*fact3)<<endl;
    
}

int main(){

    binomialcoeff(4,2);
    binomialcoeff(9,7);
    return 0;
}