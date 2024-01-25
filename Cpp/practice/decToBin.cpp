#include<iostream>
#include<math.h>

using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int ans =0, dig=0;
//     while (n != 0)
//     {
//         dig=n%2;
//         ans=10*ans+dig;
//         n=n/2;
//     }
//     cout<<"ans is "<<ans;
// }


////now try to solve another way

// int main(){
//     int n;
//      cin>>n;
//     int ans =0, i=0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (pow(10, i ) * bit ) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout<<"\n ans is "<<ans;
// }

////another approch is
int main() {
    int n=7;
    // cin >> n;
    
    int ans = 0, i = 0;

    while (n != 0) {
        int bit = n & 1;
        ans = (bit << i) + ans;
        n = n >> 1;
        i++;
    }

    cout << "Binary representation is: " << ans << endl;

    return 0;
}
