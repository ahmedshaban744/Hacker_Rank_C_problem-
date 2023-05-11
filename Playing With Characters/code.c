#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100
int main() {
    char ch;
    char s[MAX_LEN];
    char sentence[MAX_LEN];

    // Take inputs
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n"); // to handle newline character left in the buffer
    scanf("%[^\n]%*c", sentence);

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}
