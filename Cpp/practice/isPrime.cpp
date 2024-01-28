#include<iostream>
using namespace std;

 bool isPrime(int n){
    for (int i = 2; i<n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
 }

 int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    if (isPrime(num)==1){
        cout<<"is a prime number";
    }else{
        cout<<"not a prime number";
    }
 }