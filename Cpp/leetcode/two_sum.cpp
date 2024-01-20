
#include<iostream>
using namespace std;

class Solution {
public:
    int twoSum(int arr[],int);
};
int Solution::twoSum(int nums[], int target){
     for(int i=0; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(nums[i]+nums[j]==target){
                cout<<"find at "<<i <<"and "<<j;
            }
        }
     }
};
int main(){
    Solution sr;
    int arr[]={2,4,5,1,7,9};
    sr.twoSum(arr,3);
}