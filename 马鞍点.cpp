#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int juzhen[100][100];
	int i, j, f, max, min, col, row, rx, ry;
	int flag = 0;
	printf("请输入矩阵的行数和列数:\n");
	scanf("%d%d", &row,&col);
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			scanf("%d", &juzhen[i][j]);
		}
	}
	for (i = 0; i < row; i++) {
		min = juzhen[i][0];
		for (j = 0; j < col; j++) {
			if (min > juzhen[i][j]) {
				min = juzhen[i][j];
			}
		}
		rx = i;
		for (j = 0; j < col; j++) {
			if (juzhen[i][j] == min) {
				max = juzhen[0][j];
				for (f = 0; f < row;f++) {
					if (max < juzhen[f][j]) {
						max = juzhen[f][j];
					}
				}
				ry = j;
				if (min == max) {
					flag = 1;
					printf("(%d,%d,%d)", rx + 1, ry + 1, juzhen[i][j]);
				}
			}

		}
	}
	if (flag != 1)
	{
		printf("NONE");
	}
	return 0;
}
