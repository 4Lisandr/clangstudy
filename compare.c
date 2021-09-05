#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_scores(const void* score_a, const void* score_b){
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return a-b;
}

int compare_scores_desc(const void* score_a, const void* score_b){
	return -compare_scores(score_a, score_b);
}

typedef struct {
	int width;
	int height;
} rectangle;

int compare_areas(const void* a, const void* b){
	rectangle* ar = (rectangle*)a;
	rectangle* br = (rectangle*)b;
	return ar->width*ar->height - br->width*br->height;
}

int compare_names(const void* a, const void* b){
	char** as = (char**)a;
	char** bs = (char**)b;
	return strcmp(*as, *bs);
}

int compare_areas_desc(const void* a, const void* b){
	return -compare_areas(a,b);
}

int compare_names_desc(const void* a, const void* b){
	return -compare_names(a,b);
}

int main(){

	int scores[] = {543, 323, 32, 554, 11, 3, 112};
	int size = *(&scores + 1) - scores;
	qsort(scores, size, sizeof(int), compare_scores_desc);
	puts("Sorted scores: ");
	for (int i = 0; i < size; ++i){
		printf("Score =  %i\n", scores[i]);
	}

	char* names[] = {"Adam", "Eva", "Bob", "Alice"};
	qsort(names, 4, sizeof(char*), compare_names);
	puts("Names: ");
	for (int i = 0; i < 4; ++i)	{
		printf("%s\n", names[i]);
	}
	
	return 0;
}