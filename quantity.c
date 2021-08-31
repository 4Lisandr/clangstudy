#include <stdio.h>

typedef union {
	short count;
	float weight;
	float volume;
} quantity;

int main(){
	quantity q = {4};
	quantity q1 = {.weight = 1.5};
	quantity q2;
	q2.volume = 3.7;
	return 0;
}