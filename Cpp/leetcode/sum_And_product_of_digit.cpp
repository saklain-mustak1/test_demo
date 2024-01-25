#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int pro = 1;
    int sum = 0;
    while(n!=0){
        int dig = n%10;
        pro = pro*dig;
        sum = sum+dig;
        n=n/10;
    }
    cout<<"product of number is "<<pro<<"\n sum of number is "<<sum<<endl;
    cout<<"difference of the number is "<<pro-sum; 
}