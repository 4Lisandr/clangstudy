#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main(){
	char s[] = "Say password";
	encrypt(s);
	printf("Encypted in: '%s'\n", s);
	printf("Checksum is: %i\n", checksum(s));
	encrypt(s);
	printf("Decrypted back in: '%s'\n", s);
	printf("Checksum is: %i\n", checksum(s));
	return 0;
}