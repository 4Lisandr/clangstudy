#include <stdio.h>

typedef struct{
	const char *name;
	const char *species;
	int age;
} turtle;

void happy_birthday(turtle t){
	t.age = t.age + 1;
	printf("Happy birthday, %s! Now you are %i years old!\n",
	t.name, t.age);
}

int main(){
	/* code */
	turtle myrtle = {"Tortilla", "Leatherback Turtle", 99};
	happy_birthday(myrtle);
	printf("%s is %i\n", myrtle.name, myrtle.age);
	return 0;
}