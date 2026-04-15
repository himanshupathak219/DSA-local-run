#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number :";
    cin>>n;
    int a;
    cout<<"enter a number :";
    cin>>a;
    for( int i=1;i<=n;i++){
        for( int j=1;j<=a;j++){
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
}