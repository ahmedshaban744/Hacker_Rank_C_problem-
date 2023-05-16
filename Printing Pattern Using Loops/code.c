#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int size =2*n-1;
    int arr[size][size];
    int st=0;
    int end=size-1;
    
  	// Complete the code to print the pattern.
      for(int x=n;x>0;x--)
      {
      for(int i=st ;i<=end;i++)
      {
      for(int j=st;j<=end;j++)    
        arr[i][j]=n;
      }
    st++;
    end--;
    n--;  
    
}
for(int z=0;z<size;z++)
{
for(int c=0;c<size;c++)
{
printf("%d" " """,arr[z][c]);

}
printf("\n");
}
return 0;
}