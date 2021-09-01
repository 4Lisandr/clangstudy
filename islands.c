#include <stdio.h>
#include <stdlib.h>

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

island* create(char *name){
	island *i = malloc(sizeof(island));
	i->name = name;
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}

int main(){
	island *amity = create("Amity");
	island *craggy = create ("Craggy");
	island *nublar = create("Nublar");
	island *shutter = create("Shutter");

	amity->next = craggy;
	craggy->next = nublar;
	nublar->next = shutter;

	display(amity);
	return 0;
}

