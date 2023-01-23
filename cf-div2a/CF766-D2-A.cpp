#include<iostream>
using namespace std;



int main(){
    string a, b;

    cin >> a >> b;

    if(a==b)
        cout << -1;
    else if((int)a.size()>(int)b.size())
        cout << (int)a.size();
    else
        cout << (int)b.size();


    return 0;
}
