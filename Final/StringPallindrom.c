#include <stdio.h>
#include <string.h>

int main() {
    char s1[50];
    char s2[50];

    gets(s1);

    int len = strlen(s1);
    int i, j;

    for (j=0, i=len-1; i >= 0; i--, j++) {
        s2[j] = s1[i];
    }
    s2[j] = '\0';

    if (strcmp(s1, s2) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
