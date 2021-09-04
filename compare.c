#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_scores(const void* score_a, const void* score_b){
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return a-b;
}

int compare_scores_desc(const void* score_a, const void* score_b){
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return b-a;
}

typedef struct {
	int width;
	int height;
} rectangle;

int compare_areas(const void* a, const void* b){
	rectangle ar = *(rectangle*)a;
	rectangle br = *(rectangle*)b;
	return ar.width*ar.height - br.width*br.height;
}

int main(){
	int a = 7;
	int b = 9;
	int res = compare_scores(&a, &b);
	puts("--------");

	printf("Result is: %s\n", res);
	return 0;
}