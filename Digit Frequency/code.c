#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
     char arr1[1000];   
    int arr2[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr3[10] = {0};

    scanf("%s", arr1);

    int length = strlen(arr1);
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (arr1[j] ==('0'+arr2[i]))   
            /*
            i add 0 becouse arr1 is char array and arr2 is integar 
            to comper character with intger must  git the ASCII  to the character 
            to convert char to  ASCII add 48 and 0==48 as ASCII
            */                                                 
                 {                         
                count++;
            }
        }
        arr3[i] = count;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
