#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

	/**
	* Sort an array a of the length n
    
	*/
       
typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n)
 { //calculat the area of the Triangle
for (int i=0;i<n-1;i++)
{
  for (int j=i+1;j<n;j++)  //calculat the area of the all next Triangles
  {
  float p_i=(tr[i].a+tr[i].b+tr[i].c)/2.0;  //divie / 2.0 not 2  for the casting 
  float p_j=(tr[j].a+tr[j].b+tr[j].c)/2.0;  //int/ float= float and int / int =int
         float area_1=sqrt(p_i*(p_i-tr[i].a)*(p_i-tr[i].b)*(p_i-tr[i].c));
         float area_j=sqrt(p_j*(p_j-tr[j].a)*(p_j-tr[j].b)*(p_j-tr[j].c));
 
               if(area_1>area_j)    //comper the i Triangles with the all                                                    Triangles 
                {
                triangle temp = tr[i]; //swap the Triangles dimanation to the                                                   smallest Triangles area 
                tr[i] = tr[j];
                tr[j] = temp;
                }
 
         }  
     }
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}