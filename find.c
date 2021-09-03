#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find(){
	int NUM_ADS = 5;
	char *ADS[] = {
		"William: single, sport, TV",
		"Luis: single, books, food",
		"Michel: divirced, sport, Biber",
		"Piter: single, chess",
		"John: single, sport, TV"
	};
	int i;
	puts("Results of search:");
	puts("-----------");
	for(i=0; i<NUM_ADS; i++){
		if(strstr(ADS[i],"sport") &&
		!strstr(ADS[i], "Biber")){
			printf("%s\n", ADS[i]);
		}
	}
	puts("-------------");
}
int main(){
	find();
	return 0;
}