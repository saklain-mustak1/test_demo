#include<iostream>
using namespace std;

class Array{
    private:
        int capacity;
        int lastNumber;
        int *ptr;
    public:
        void CreateArray(int);
        void fillArray();
        void insertArray(int,int);
        void show();
};

void Array::CreateArray(int cap){
    capacity=cap;
    lastNumber=-1;
    ptr = new int[cap];
}

void Array::fillArray(){
    for (int i = 0; i < capacity; i++)
    {
        lastNumber++;
        ptr[lastNumber]=i;
        // cout<<"what is ptr "<<ptr[i]<<"\n";
    }
}

void Array::insertArray(int index, int data){
    // if(index<0 || index>lastNumber+1){
    //     cout<<"invalid index";
    // }
    // else if(lastNumber==capacity-1){
    //     cout<<"overflow";
    // }
    // else{
        for (int i = lastNumber; i >= index; i--){
            ptr[i]=ptr[i-1];
        }
        ptr[index]=data;
        lastNumber++;  
    // }
}

void Array::show(){
    for (int i = 0; i < capacity; i++)
    {
        cout<<" this is from show "<<ptr[i]<<"\n";
    }  
}

int main(){
    Array arr;
    arr.CreateArray(20);
    arr.fillArray();
    //  arr.insertArray(0,7);
    //   arr.insertArray(10,5);
     arr.insertArray(0,8);
     arr.show();
    
}