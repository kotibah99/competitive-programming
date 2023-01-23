#include <iostream>
using namespace std;



int main()
{
	string str;
	cin >> str;

	if (97 <= str[0] && str[0] <= 122)
		str[0] -= 32;

	cout << str;


	return 0;
}
