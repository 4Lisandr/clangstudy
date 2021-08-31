#include <stdio.h>

typedef struct{
	const char *name;
	const char *species;
	int age;
} turtle;

<<<<<<< HEAD
void happy_birthday(turtle *t){
	t->age++;
	printf("Happy birthday, %s! Now you are %i years old!\n",
	t->name, t->age);
=======
void happy_birthday(turtle t){
	t.age = t.age + 1;
	printf("Happy birthday, %s! Now you are %i years old!\n",
	t.name, t.age);
>>>>>>> 7ab2a90d3cf8824dbdbd0a8583637ab1107c8bf7
}

int main(){
	/* code */
	turtle myrtle = {"Tortilla", "Leatherback Turtle", 99};
<<<<<<< HEAD
	happy_birthday(&myrtle);
=======
	happy_birthday(myrtle);
>>>>>>> 7ab2a90d3cf8824dbdbd0a8583637ab1107c8bf7
	printf("%s is %i\n", myrtle.name, myrtle.age);
	return 0;
}