#include<iostream>
using namespace std;



int main(){
    int n;
    cin >> n;

    string ans = "ROYGBIV";

    for(int i = 7; i<n; i++)
        ans += ans[i-4];


    cout << ans;

    return 0;
}
