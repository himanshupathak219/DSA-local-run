#include<iostream>
using namespace std;

int main(){

   int a;
   cout<<"enter a number :";
   cin>>a;
   int rem;

   for( int i=0;a!=0;i++){
    rem =a%10;
    cout<<rem;
    a=a/10;
   }
   return 0;




}