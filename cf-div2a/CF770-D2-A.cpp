#include<iostream>
using namespace std;



int main(){
    string str = "uowvkdqhxnglmczterjaifybsp";

    int n,k;
    string password;
    cin >> n >> k;
    int pos = 0;
    while(n--){
        if(pos==k)
            pos = 0;
        password += str[pos++];
    }

    cout << password;

    return 0;
}
