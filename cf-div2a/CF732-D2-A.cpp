#include<iostream>
using namespace std;



int main(){
    int k,r;
    cin >> k>>r;

    for(int i=1;;i++){
        int num = k * i;
        if(num%10==r || num%10==0){
            cout << i;
            break;
        }
    }

    return 0;
}
