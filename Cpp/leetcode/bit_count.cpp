#include<iostream>
using namespace std;

int main(){
    uint32_t n;
    cout<<"enter bit no.";
    cin>>n;
    int count=0;
    while(n!=0){
       if (n & 1)
       {
        count++;
       }
       n=n>>1;
    }
   cout<<"difference of the number is "<<count; 
}