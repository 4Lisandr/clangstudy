#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum response_type{DUMP, SECOND_CHANCE, MARRIAGE};
typedef struct {
	char* name;
	enum response_type type;
} response;

void dump(response r){
	printf("Dear %s\n", r.name);
	puts("Bad news: ........");
}

void second_chance(response r){
	printf("Dear %s\n", r.name);
	puts("Good news: ......");
}

void marriage(response r){
	printf("Dear %s\n", r.name);
	puts("Congratulations! .......");
}

void (*replies[])(response) = {dump, second_chance, marriage};

int main(){
	response r[] = {
		{"Micke", DUMP}, {"Luis", SECOND_CHANCE},
		{"Matt", SECOND_CHANCE}, {"Bill", MARRIAGE}
	};
	for (int i = 0; i < 4; ++i){
		replies[r[i].type](r[i]);
	}
	return 0;
}