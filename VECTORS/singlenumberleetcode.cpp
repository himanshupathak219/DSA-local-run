#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>nums={1,2,2,1,78,11,78,9,5,9,5};
int target=0;
for( int i :nums){
    target=i^target;
}
cout<<"single number = "<<target;
return 0;
}