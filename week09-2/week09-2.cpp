#include<stdio.h>
//find more numbers
int main() {
	int number[10][10] = {
		{95,68,95,42,65,31,42,51,42,68},
		{59,74,21,35,62,14,21,35,26,28},
		{29,24,16,25,42,36,25,16,24,25},
		{32,12,36,24,15,32,16,95,75,85},
		{62,43,19,86,24,37,19,65,53,28},
		{64,29,21,53,24,16,58,75,14,25},
		{35,62,95,86,47,85,78,14,63,29},
		{86,47,68,32,12,36,69,86,74,48},
		{46,26,53,69,78,46,14,21,34,26},
		{38,69,47,28,34,16,24,28,59,68},
	};
	int before;
	int after;
	int n;

	/*printf("%d\n", number[0][0]);
	printf("%d\n", number[0][9]);
	printf("%d\n", number[9][3]);
	printf("%d\n", number[9][9]);*/

	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			printf("%d,", number[row][col]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Result is ");
	for (int row = 0; row < 10; row++) {

		for (int col = 0; col < 10; col++) {
			//printf("%d,", number[row][col]);
			n = number[row][col];
			before = number[row][col - 1];
			after = number[row][col + 1];

			if (n > before && n > after) {
				//printf("%d, ",n);
				//printf("Result is ");
				printf("(%d,%d),", row, col);
			}

		}
		//printf("\n");
	}
	return 0;
}