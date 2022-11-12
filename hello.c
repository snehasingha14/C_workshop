#include <stdio.h>
#include<time.h>
int main()
{
double time_spent =0.0;
 clock_t begin = clock();
 
printf("Hello MIT");

clock_t end = clock();
time_spent += (double)(end - begin)/CLOCKS_PER_SEC;
printf("the elapsed time is %f seconds \n",time_spent);
}
