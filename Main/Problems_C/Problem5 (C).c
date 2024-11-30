#include <stdio.h>

int main(void)
{
	int num, hp, can; //허들의 수, 체력, 뛰어넘을 수 있는 허들의 최대 높이
	scanf("%d", &num);

	int hudle[21] = {0,};

	for (int i = 0; i < num; i++) {
		scanf("%d", &hudle[i]);
	}

	scanf("%d %d", &can, &hp);

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

	printf("%d", cnt);

    return 0;
}