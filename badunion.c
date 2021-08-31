#include <stdio.h>

typedef union {
	float weight;
	int count;
} cupcake;

int main() {
	cupcake order = {2};
	printf("Cupcakes: %i\n", order.count);
	return 0;
}