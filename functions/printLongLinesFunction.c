//written by Harry Powell, Compiled with C99
//prints the last 10 strings longer than 10 chars each
#include <stdio.h>

#define MAXLINE 100
#define MAXSTOREDLINES 10
#define THRESHOLD 10


int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;	
	char line[MAXLINE];
	
	char outputlines[MAXLINE][MAXSTOREDLINES];
	
	int linestoredcount;
	int i;
	linestoredcount = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > THRESHOLD) {
			for (i = 0; i < MAXLINE; ++i) {
				outputlines[i][linestoredcount] = line[i];
			}
		}
		++linestoredcount;
	}
	if (linestoredcount > 0) {
		printf("Printing lines longer than %i:\n", THRESHOLD);
		for (i = 0; i < linestoredcount; ++i) {	
			printf("%s", outputlines[i]);
		}
	}	
	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i=0; i<lim-1 && (c=getchar()) != EOF && c!= '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;

	while ((to[i] = from[i] != '\0')) {
		++i;
	}
}
