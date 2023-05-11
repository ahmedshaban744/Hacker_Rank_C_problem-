#include <stdio.h>

int max_of_four(int a, int b, int c, int d) 
{
    int large=0;
    large=a;
  
   if (b>large)
   {
    large=b;
   }
    if(c>large)
    {
     large=c;
    }
    if (d>large)
    {
     large=d;
    }
     return large;

     
    
    }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}