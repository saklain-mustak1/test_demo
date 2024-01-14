#include<iostream>

using namespace std;
 int main(){
    int row =1;
    while(row<=3){
        int col =1;
        while(col<=row){
           // char ch = ('A'+col-1); // A AB ABC
            // char ch = ('A'+row-1); //A BB CCC
             char ch = ('A'+row+col-2);
            cout<<ch <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
 }