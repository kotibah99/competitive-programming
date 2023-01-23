#include<iostream>
using namespace std;



int main()
{
    string s;
    cin >> s;

    for(int i=(int)s.size()-1; i>=0; i--)
        s += s[i];

    cout << s;


    return 0;
}
