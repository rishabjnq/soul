/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAXSIZE 10

void main()
{
int a[MAXSIZE];
int i, N,power;
float x, polySum;

clrscr();

printf("Enter the order of the polynomial\n");
scanf("%d", &N);

printf("Enter the value of x\n");
scanf("%f", &x);

/*Read the coefficients into an array*/

printf("Enter %d coefficients\n",N+1);
for (i=0;i <= N;i++)
{
scanf("%d",&a[i]);
}

polySum = a[0];

for (i=1;i<= N;i++)
{
polySum = polySum * x + a[i];
}

power = N;

/*power--;*/

printf("Given polynomial is:\n");
for (i=0;i<= N;i++)
{
if (power < 0)
{
break;
}

/* printing proper polynomial function*/
if (a[i] > 0)
printf(" + ");
else if (a[i] < 0)
printf(" - ");
else
printf (" ");
printf("%dx^%d ",abs(a[i]),power--);

}

printf("\nSum of the polynomial = %6.2f\n",polySum);
}