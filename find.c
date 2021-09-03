#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sports_no_bieber(char *s){
	return strstr(s, "sport") && !strstr(s, "Bieber");
}

int sports_or_workout(char *s){
	return strstr(s, "sport") || strstr(s, "workout");
}

int arts_theater(char *s){
	return strstr(s, "arts") && strstr(s, "theater");
}

void find(int (*match)(char*)){
	int NUM_ADS = 5;
	char *ADS[] = {
		"William: single, sport, TV, theater",
		"Luis: single, books, food, arts",
		"Michel: divirced, sport, Bieber",
		"Piter: single, chess, workout",
		"John: single, sport, TV, theater, arts"
	};
	int i;
	puts("Results of search:");
	puts("-----------");
	for(i=0; i<NUM_ADS; i++){
		if(match(ADS[i])){
			printf("%s\n", ADS[i]);
		}
	}
	puts("-------------");
}
int main(){
	find(sports_no_bieber);
	find(sports_or_workout);
	find(arts_theater);
	return 0;
}