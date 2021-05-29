#include <stdio.h>
#define MAXLINELEN 100
#define MAXLINES 100
#define THRESHOLD 10

int getline(char line[], int maxline);

int main() {
	int len;
	char line[MAXLINELEN];
	char output[MAXLINELEN][MAXLINES];
	
	int linecount, i;
	linecount = 0;
	
	printf("Please type an input. Inputs longer than %i will be printed back to you\n", THRESHOLD);

	while ((len = getline(line, MAXLINELEN)) > 1) {
		if (len > THRESHOLD){
			for (i = 0; i < len; ++i) {
				output[linecount][i] = line[i];
			}
			++linecount;
		}
	}
	int printcount = 0;
	if (linecount > 0) {
		printf("Printing lines longer than %i:\n", THRESHOLD);
		while (printcount < linecount) {
			printf("%s", output[printcount]);
			++printcount;
		}
	}
	else
		printf("There were no lines longer than %i:\n", THRESHOLD);
	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i=0; i<lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
