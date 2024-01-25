#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any number";
    cin>>n;
    int ans=0;

    while (n != 0)
    {
        int dig = n%10;
        if((ans < INT16_MIN/10) || (ans > INT16_MAX/10)){
            cout<<"anser is not range";
            return 0;
        }
        ans=(10*ans)+dig;
        n=n/10;
    }
    cout<<"answer is "<<ans;
}