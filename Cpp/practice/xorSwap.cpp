#include<iostream>

using namespace std;

int main(){
    int a=5;
    int b=6;

    cout<<"the a is "<<a<<"\n";
    cout<<"the b is "<<b<<"\n";
    a=b^a;
    b=b^a;
    a=b^a;

    cout<<"the a is after swap "<<a<<"\n";
    cout<<"the b is after swap "<<b;

}