#include <stdio.h>
#define MAXLINE 1000   //max input line size

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

int main() {
    int len;     //current line length
    int max;     //max length so far
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getLine(char s[], int lim) {    //read a line into s, return the length
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!= c!='\n'; ++i)
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

    while ((to[i] = from[i]) != '\0')
        ++i;
}

