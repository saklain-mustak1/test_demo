#include<iostream>
using namespace std;

int arrayin(int a){
    int arra[a];
    int size = sizeof(arra)/sizeof(int);
    cout<<"enter "<<size<<" element of array"<<endl;
    for(int i=0; i<a; i++){
        cin>>arra[i];
    }
    cout<<"you enter element"<<endl;
     for(int i=0; i<a; i++){
        cout<<arra[i]<<endl;
    }
}

// int arrayout(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }


 /* here i comment out the main fuction bcoze this file run on another file main function
name of the file is fetchfeomAnother.cpp*/ //check the file for nun this program.


// int main(){
//     // int arr[5];
//     // int arri = arrayin(5);
//     arrayin(5);
//     // arrayout(arr, 10);
//     // arrayout(arr,6);
// }