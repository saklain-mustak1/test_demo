#include<iostream>
using namespace std;

void findunique(int arr[],int size){
    //int size = sizeof(arr)/sizeof(int);
    int ans=0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    cout<<"ans is "<<ans;
}

int main(){
    int arr[5]={1,4,1,3,4};
    findunique(arr,5);
}