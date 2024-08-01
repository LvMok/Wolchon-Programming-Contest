#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	int n, x;
	cin >> n >> x;
	cout << (x << (n-1));
}