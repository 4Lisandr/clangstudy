#include <stdio.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;

void display(island *start) {
	for (island *i = start; i != NULL; i = i->next) {
		printf("Name: %s open: %s - %s\n", i->name, i->opens, i->closes);
	}
}

int main(){
	island amity = {"Amity", "9:00", "17:00", NULL};
	island craggy = {"Craggy", "9:00", "17:00", NULL};
	island nublar = {"Nublar", "9:00", "17:00", NULL};
	island shutter = {"Shutter", "9:00", "17:00", NULL};

	amity.next = &craggy;
	craggy.next = &nublar;
	nublar.next = &shutter;

	display(&amity);
	return 0;
}