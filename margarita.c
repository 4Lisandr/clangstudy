#include <stdio.h>

typedef union {
	float lemon;
	int lime_pieces;
} lemon_lime;

typedef struct {
	float tequila;
	float cointreau;
	lemon_lime citrus;
} margarita;

int main() {
	margarita m = {2.0, 1.0, {0.5}};
	margarita m1 = {2.0, 1.0, 0.5};
	margarita m2 = {2.0, 1.0, .citrus.lemon=2.0};
	margarita m3 = {1.5, 0.5, {.lime_pieces=1}};
	margarita m4 = {2.0, 1.0, {1}};
	margarita m5 = {2.0, 1.0, {2}};

	printf("%2.1f of tequila\n%2.1f of cointreau\n%2.1f of juce\n",
		m.tequila, m.cointreau, m.citrus.lemon);
	printf("%2.1f of tequila\n%2.1f of cointreau\n%i slice of lime\n",
		m3.tequila, m3.cointreau, m3.citrus.lime_pieces);
	return 0;
}