#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int M,A, B;

	cin >> M >> A >> B;

	if (B + M > 60) {
		A += (B + M) / 60;
		B = B + M - (B + M) / 60 * 60;
	}
	else {
		B += M;
	}

	if (B - 1 < 0) {
		A--;
		B += 60;
	}
	else B--;

	if (A > 23) {
		A -= A - A / 24 * 24;
	}

	cout.width(2);
	cout.fill('0');

	cout << A << "시 ";

	cout.width(2);
	cout.fill('0');

	cout << B << "분";

	return 0;
}