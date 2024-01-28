#include<iostream>
using namespace std;

int factoril(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r){
    int ans = factoril(n)/(factoril(r)*factoril(n-r));
    return ans;
}


int main(){
    int a,b;
    cout<<"enter n and r";
    cin>>a>>b;
    int result = ncr(a, b);
    cout<<" result is "<<result;
}