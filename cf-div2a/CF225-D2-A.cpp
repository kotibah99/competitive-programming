#include<iostream>
using namespace std;




int main(){
    int n, x;
    cin >> n >> x;

    while(n--){
        int y,z;
        cin >> y >> z;

        if(y==x || y==7-x || z==x || z==7-x)
            {cout << "NO"; return 0;}
    }

    cout << "YES";

    return 0;
}
