#include <stdio.h>

#define START_OF_PRINTABLE_CHAR 33
#define END_OF_PRINTABLE_CHAR 126
#define CHAR_SET_SIZE (END_OF_PRINTABLE_CHAR - START_OF_PRINTABLE_CHAR + 1)

int main(){
	int c;
	int charset[CHAR_SET_SIZE];
	
	for(int i = 0; i < CHAR_SET_SIZE; ++i){
		charset[i] = 0;
	}
	
	while((c = getchar()) != EOF){
		if(c >= START_OF_PRINTABLE_CHAR
		|| c <= END_OF_PRINTABLE_CHAR)
			++charset[c - START_OF_PRINTABLE_CHAR];
	}

	for(int i = 0; i < CHAR_SET_SIZE; ++i){
		putchar(i+START_OF_PRINTABLE_CHAR);
		putchar(' ');
		for(int j = 0; j < charset[i]; j++){
			putchar('*');
		}
		putchar('\n');
	}
}
