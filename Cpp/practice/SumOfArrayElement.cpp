#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,3,6,1,7};
    int sum = 0;

    for(int i = 0; i<5; i++){
        sum = sum + arr[i]; 
    }
    cout<<"sum of the array is "<<sum;
}