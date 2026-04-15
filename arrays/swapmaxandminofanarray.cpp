//WAF TO SWAP THE MAX AND MIN OF AN ARRAY
#include<iostream>
using namespace std;


int max_number(int arr[],int size ){
    int p=arr[0];
    for(int i=0;i<=size;i++){
        if(p<max(arr[i],arr[i+1])){
            p=max(arr[i],arr[i+1]);
        }
        
    }
    return p;


}

int min_number(int arr[],int size ){
       int p=arr[0];
    for(int i=0;i<=size;i++){
        if(p>min(arr[i],arr[i+1])){
            p=min(arr[i],arr[i+1]);
        }
    }
    return p;
    
}

int swap_array(int arr[],int size){
    int a,b;
    for( int i=0;i<=size;i++){
        if( arr[i]==max_number(arr,size)){
            a=i;
        }
         if( arr[i]==min_number(arr,size)){
            b=i;
        }

    }
    swap(arr[a],arr[b]);
    
}


void print_array( int arr[],int size){
    for( int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){

    int arr[]={12,14,2,11,76,17};

    int size=5;
     print_array(arr,size);
     cout<<endl;
    swap_array(arr,size);
    print_array(arr,size);
}