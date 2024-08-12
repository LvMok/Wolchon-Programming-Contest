#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num, hp, can; //허들의 수, 체력, 뛰어넘을 수 있는 허들의 최대 높이
	cin >> num;
	vector<int> hudle(num, 0); //허들배열(벡터/일반 배열써도 상관 X)

	for (int i = 0; i < num; i++) {
		cin >> hudle[i];
	}

	cin >> can >> hp;

	int cnt = 0; //뛰어넘은 허들의 갯수 저장

	for (int i = 0; i < num; i++) {
		int temp = 1;

		if (hudle[i] > can) { //허들의 높이가 뛰어넘을 수 있는 허들의 최대높이보다 높을 때
			temp = hudle[i] - can;
		}

		if (temp > hp) {
			break;
		}
		else {
			hp -= temp;
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}
