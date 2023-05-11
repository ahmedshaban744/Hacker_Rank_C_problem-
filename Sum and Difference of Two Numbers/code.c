#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    float z;
    float w;
	scanf("%d",&x);
        scanf("%d", &y);
    scanf("%f",&z);
    scanf("%f",&w);
    int sum1= x+y;
     int sub1=((int)x-y);
  float sub2 =z-w;
 float sum2 =z+w;
  printf("%d %d \n",sum1,sub1);
 
 printf("%0.1f %0.1f",sum2,sub2);
 return 0;

    
}