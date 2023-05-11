#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
 {
 
  
  int max_and=0;
  int max_or=0;
  int max_xor=0;
 if(n<2)       //check if unmber large than 2 becouse if less than 2 there on two pair to do bitwise on it
  {
      printf("0\n0\n0\n");
      return ;
  
  }
  
    for(int i=1;i<=n ;i++) //i start from 1 not 0 
    
  {
      for(int m=i+1 ;m<=n ;m++)
      {
          int and= i&m;
          int or= i|m;
          int xor =i^m;
          /*
          use 
          if
          if 
          if 
          ...
          not 
          if 
          else if
          ...
becouse if statements instead of else if statements can cause the            program to update multiple maximum values if multiple conditions are 
     true.
          */
          if(and<k && and>max_and)
          max_and=and;
           if(or<k && or>max_or)
          max_or=or;
           if(xor<k && xor>max_xor)
          max_xor=xor;
          
      }
     
  }   
  
  
  
   printf("%d\n%d\n%d\n",max_and ,max_or ,max_xor);
  }



int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
