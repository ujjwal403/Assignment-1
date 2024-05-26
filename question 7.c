#include <stdio.h>

int main() {
	float kilometers;

	printf(" Enter kilometers:");
	scanf("%f", &kilometers);

	float miles = kilometers / 1.6;

	printf("%f Miles", miles);

}

