#include<iostream>
using namespace std;

int reverse(int arr[], int size){
    cout<<"your array is "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nalternative reverse of the array is "<<endl;
    ////using for loop
    int a=0;
    for(int i=0; i<size-1; ){
        a=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=a;
        i+=2;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {2,3,6,1,7,8,3,1,0,6};
    reverse(arr,10);
}