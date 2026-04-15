#include<iostream>
using namespace std;

int main(){
    int marks[]={90,91,92,93,94};
    int size=0;
    int random;
    for( int i=0;i<=4;i++){
        cout<<marks[i]<<endl;
    }
     for( int i=0;i<=4;i++){
        size=size+ sizeof( marks[i]);
    }
    cout<<size;
    cout<<sizeof(random);
    return 0;
}