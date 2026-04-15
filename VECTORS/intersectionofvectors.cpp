// WAF TO PRINT THE INTERSECTION OF TWO VECTORS 
#include<iostream>
#include<vector>
using namespace std;

int printintersection(vector<int>vec1,vector<int>vec2){
    vector<int>finalvector;
    for(int i=0;i<=4;i++){
        int p=vec1[i];
        for(int j=0;j<=4;j++){
            if(vec2[j]==p){
                finalvector.push_back(p);
                break;
            }
        }
        
    }
    for(int i:finalvector){
        cout<<i<<" ";
    }
}

int main(){
    vector<int>vec1;
    vector<int>vec2;
    int x,y;
    for(int i=0;i<=4;i++){
        cout<<"enter "<<i<<" element in vector 1 :";
        cin>>x;
        vec1.push_back(x);
        cout<<endl;
    }
    for(int i=0;i<=4;i++){
        cout<<"enter "<<i<<" element in vector 2 :";
        cin>>y;
        vec2.push_back(y);
        cout<<endl;
    }

    printintersection(vec1,vec2);
}