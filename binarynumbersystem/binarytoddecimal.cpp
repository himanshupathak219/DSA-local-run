#include<iostream>
using namespace std;

int main(){
    int binary;
    cout<<"enter a binary number :";
    cin>>binary;
    int rem,decimal=0,pow=1;
    for( int i=0;binary>0;i++){
        rem=binary%10;
        decimal=decimal+rem*pow;
        binary=binary/10;
        pow=pow*2;

    }
    cout<<decimal;
    return 0;
}