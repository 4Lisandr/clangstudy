#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *question;
	struct node *no;
	struct node *yes;
} node;

int yes_no (char *question){
	char answer[3];
	printf("%s? (y/n): ", question);
	fgets(answer, 3, stdin);
	return answer[0] == 'y';
}

node* create(char *question){
	node *n = malloc(sizeof(question));
	n->question = strdup(question);
	n->no = NULL;
	n->yes = NULL;
	return n;
}

void release (node *n){
	if (n){
		if(n->no)
			release(n->no);
		if(n->yes)
			release(n->yes);
		if (n->question)
			free(n->question);
		free(n);
	}
}

int main() {
	char question[80];
	char suspect[40];
	node *start_node = create("Does the suspect have a mustache?");
	start_node->no = create("Loretta");
	start_node->yes = create("Ivan");

	node *current;
	do{
		current = start_node;
		while(1){
			if (yes_no(current->question))
			{
				if (current->yes){
					current = current->yes;	
				} 	else {
					printf("This suspect has been identified\n");
					break;
				}
			} 	else if (current->no){
				current = current->no;
			} 	else {
				//yes_node - put the name of new suspect
				printf("Who is suspect? ");
				fgets(suspect, 40, stdin);
				node *yes_node = create(suspect);
				current->yes = yes_node;
				//no_node - put copy of question
				node *no_node = create(current->question);
				current->no = no_node;
				//Next question
				printf("Ask me a question for %s, not for %s. ",
				suspect, current->question);
				fgets(question, 80, stdin);
				current->question = strdup(question);

				break;
			}
		}
	} while (yes_no("Try again?"));
	release(start_node);

	return 0;
}