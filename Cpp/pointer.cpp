#include<iostream>

using namespace std;

int main(){
    int a=10, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout<<"The address of a: "<<ptr1;
    cout<<"the address of ptr1: "<<ptr2;
    ptr1 = new int[a];

    for (size_t i = 0; i < 10; i++)
    {
        ptr1[i]=i+1;
        cout<<"the ptr1 is"<<ptr1[i]<<"\n";
    }
    
}
