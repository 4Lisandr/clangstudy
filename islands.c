#include <stdio.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;

int main(){
	island amity = {"Amity", "9:00", "17:00", NULL};
	island craggy = {"Craggy", "9:00", "17:00", NULL};
	island nublar = {"Nublar", "9:00", "17:00", NULL};
	island shutter = {"Shutter", "9:00", "17:00", NULL};

	amity.next = &craggy;
	craggy.next = &nublar;
	nublar.next = &shutter;
	return 0;
}