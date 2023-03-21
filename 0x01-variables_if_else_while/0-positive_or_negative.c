#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 * return: 0
 */
int main (void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* the code goes there */
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zero", n);
else
printf("%d is negative", n);
return(0);
}	
