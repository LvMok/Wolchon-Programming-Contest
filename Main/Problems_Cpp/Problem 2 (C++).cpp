#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	int a;
	getline(cin, str);
	cin >> a;

	for (int i = 0; i < str.size(); i++) {
		if (i == a - 1) cout << "T";
		else cout << str[i];
	}
}
