#include <stdio.h>

int main(void)
{
	int num, hp, can; //����� ��, ü��, �پ���� �� �ִ� ����� �ִ� ����
	scanf("%d", &num);

	int hudle[21] = {0,};

	for (int i = 0; i < num; i++) {
		scanf("%d", &hudle[i]);
	}

	scanf("%d %d", &can, &hp);

	int cnt = 0; //�پ���� ����� ���� ����

	for (int i = 0; i < num; i++) {
		int temp = 1;

		if (hudle[i] > can) { //����� ���̰� �پ���� �� �ִ� ����� �ִ���̺��� ���� ��
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

	printf("%d", cnt);

    return 0;
}