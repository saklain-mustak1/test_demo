#include<iostream>
using namespace std;

int reverse(int arr[], int size){
    cout<<"you array is "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n reverse of array is "<<endl;
    ////using while loop
    int start=0;
    int end = size-1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    ////using for loop
    // int a=0;
    // for(int i=0; i<size/2; i++){
    //     a=arr[i];
    //     arr[i]=arr[size-i-1];
    //     arr[size-i-1]=a;
    // }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[11] = {2,3,6,1,7,8,3,1,0,6,9};
    reverse(arr,10);
}