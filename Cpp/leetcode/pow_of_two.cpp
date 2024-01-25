#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int ans =1;
    for (int i = 0; i <= 30; i++)
    {
        // int ans = pow(2,i);
        if(ans==n){
            cout<<"True: the number is power of 2";
            return 0;
        }
        ans = ans*2;
    }
    cout<<"False: the number is not power of 2";
}
