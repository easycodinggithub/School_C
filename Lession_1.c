#include <stdio.h>
int num = 5;
int main() {
	int num = 1;
	if (num == 1) {
		int num = 7;
		num += 10;
		printf("if�� �� �������� num : %d \n", num);
	}
	printf("main �Լ� �� �������� num : %d \n", num);
}