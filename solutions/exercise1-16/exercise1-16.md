**Exercise 1.16**
Revise the main routine of the longest line program so it will print the length of arbitrary long lines, and as much as possible of the text.

Code:  
```
#include <stdio.h>

#define MAXLINE 10 /*maximum input line size*/

int getl(char line[], int maxline);
void copy(char to[], char from[]);

/*print longest input line*/
int main(){
	int len; //current input line
	int max; //maximum length seen so far
	char line[MAXLINE]; //current input line
	char longest[MAXLINE]; //longest line saved here

	max = 0;
	
	while((len = getl(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
	} 
	if(max > 0){
		printf("%s", longest);
		printf("%d\n", max );
	}
	return 0;
}

int getl(char s[], int lim){
	int c, i = 0;

	while(((c = getchar()) != EOF) && c != '\n'){
		if(i < lim - 2)
			s[i] = c;
		++i;
	}

	if(c == '\n'){
		s[lim - 2] = '\n';
		++i;
	}

	s[lim - 1] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i=0;
	while((to[i] = from[i]) != '\0')
		++i;
}
```

Input:  
```
hello there is great world out there
```

Output:
```
hello th
39
```