#include <stdlib.h>
#include <stdio.h>
#include <time.h>



/* more headers goes there */



/**                                                                            

 * main - Positive or Negative - print sign of random number                    

 * @void: Empty parameter list for main.                                     

 * Return: 0 for success                                                      */

int main(void) 
{  
int n;
srand(time(0));  
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("Last digit of %d and is 0\n", n);
else if (n > 5)
printf("Last digit of %d and is greater than 5\n", n);
else if (n < 6)
printf("Last digit of %d and is less than 6 and not 0\n", n);
return (0);
}  
