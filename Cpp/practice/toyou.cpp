#include<iostream>
using namespace std;

/*this file created for the program written in this file but run on another file
 name of the file is "fetchfeomAnpther.cpp" for run any function from this file you can run another file
 which contain this main function*/

int hello(){
    cout<<"hello man i am from another file";
}

void isEven(int a){
    if(a&1)
    {
        cout<<"number is odd"<<endl;
    }else{
        cout<<"number is even"<<endl;
    }
}
