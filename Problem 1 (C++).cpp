#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	long long int c=1;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		c *= a;
	}
	cout << c;
}
