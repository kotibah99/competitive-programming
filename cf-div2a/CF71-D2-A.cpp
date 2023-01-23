#include<iostream>
#include<vector>
#include<sstream>
using namespace std;



int main(){
    string str;
    vector<string> vec;
    int num;

    cin >> num;

    while(num--){
        cin >> str;
        int sz = (int)str.size();

        ostringstream oss;

        if(sz>10){
            oss << str[0] << sz-2 << str[sz-1];
            str = oss.str();
        }
        vec.push_back(str);
    }

    for(auto& st : vec)
        cout << st << "\n";


    return 0;
}
