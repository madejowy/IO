#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	if (argc == 1) {
		printf("Usage: %s <key>", argv[0]);
		return -1;
	}
	char flag[] = "CTF{qwertyuiop1235}";
	char key[] = "Inzynieria_Odwrotna";

	if (strcmp(key, argv[1]) == 0) {
		printf("Correct key!\nFlag: %s", flag);
	}
	else {
		printf("Incorrect key!");
	}
	return 0;
}