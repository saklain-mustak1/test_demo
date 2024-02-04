#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={4,3,7,1,9,2,3,6,7,-2};
    cout<<"enter the element for seach "<<endl;
    int key;
    cin>> key;
    bool found = search(arr, 10, key);

    if (found)
    {
        cout<<"key is found "<<endl;
    }
    else{
        cout<<"key is not found "<<endl;
    }
    
}