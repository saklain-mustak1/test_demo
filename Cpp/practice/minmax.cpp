#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int mini = INT16_MAX;
    for(int i = 0; i<size; i++){
        ////using min fuction
        mini = min(mini, arr[i]);
        ////using compare
        // if(arr[i] < mini){
        //     mini = arr[i];
        // }
    }
    return mini;
}

int getMax(int arr[], int size){
    int maxi = INT16_MIN;
    for(int i = 0; i<size; i++){
        ////using max function
        maxi = max(arr[i], maxi);
        //// using comparasion
        // if(arr[i] > maxi){
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int main()
{
    int size;
    cout<<"enter size of the array";
    cin>>size;
    int arr[100];
    cout<<"enter element "<<endl;
     for(int i = 0; i<size; i++){
        cin>>arr[i];
     }
    // int minis = getMin(arr, size);
    cout<<"minimum of the array is "<<getMin(arr, size)<<endl;
    cout<<"maximum of the array is "<<getMax(arr, size);
}