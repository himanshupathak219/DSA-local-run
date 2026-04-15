#include<iostream>
using namespace std;

void sum(int a){
    int sum=0;
    for( int i=1;i<=a;i++){
        sum=sum+i;
    }
    cout<<sum;
}

int  main(){
    int n;
    cout<<"enter a nmber :";
    cin>>n;
    sum(n);
    return 0;
}
