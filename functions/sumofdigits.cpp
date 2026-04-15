#include<iostream>
using namespace std;


void sumofdigits(int a){    //parameters  ,function declaration 
    int digit=0,sum=0;
    
    for( int i=1;i>0;i++){
        digit=a%10;
        sum=sum+digit;
        a=a/10;
        if( a==0){
            break;
        }
        

    }
    cout<<sum;
}
int main(){

    int n;
    cout<<"entr a number :";
    cin>>n;
    sumofdigits(n);    //arguements ,actual parametrrs,function calling 
    return 0;
}

