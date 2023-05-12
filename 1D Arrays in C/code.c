#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n=0;
    int sum=0;
    scanf("%d",&n);
       int *arr = (int*)malloc(n * sizeof(n));
       /*
       The reason for using casting in the given code snippet is to explicitly convert the pointer returned by the malloc() function to a pointer of type int.

The malloc() function in C returns a void* pointer, which is a generic pointer type that can be used to point to any data type. However, in the code snippet, we want to allocate memory for an array of integers, so we need to convert the void* pointer returned by malloc() to a pointer of type int* before we can use it to access and manipulate the array elements.
       */
      for(int i=0; i<n; i++)
      scanf("%d " " ",&arr[i]);
         for(int i=0; i<n; i++)  
         sum+=arr[i];
         printf("%d",sum);
         free(arr);
    return 0;
}