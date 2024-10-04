#include <stdio.h>

int main(void) {
	int sum = 0, num;

	for (num = 1; num <= 5; num++) {
		printf("num(%d) + num(%d) = %d\n", num, sum, (sum + num));

		sum = sum + num;
		printf("d\n", sum);
	}
	printf("Final : num = %d, sum = %d", num, sum);

	return 0;
}