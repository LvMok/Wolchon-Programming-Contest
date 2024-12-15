#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	
	cout << 100 - count(str.begin(), str.end(), '-') + count(str.begin(), str.end(), '+') << "%";
}
