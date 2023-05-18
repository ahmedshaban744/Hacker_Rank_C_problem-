#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i=0; i<1024;i++)
    {
        if(s[i]== ' ')           // check if the byte store spcae
        s[i]='\n';                 // if true replace the space by newline

    }
    printf("%s",s);                 //print the string

    free(s);

    return 0;
}
