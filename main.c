#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
	{	
		return(a+b);
		
	}

int square(int n)
	{
		return(n*n);
	}	
int get_max(int a, int b)	
	{
		if (a>b)
		return (a);
		else return (b);
	}

int main(void)

{
	int x, y;
	int output;
	x = 2;
	y = 5;
	
	output = sumTwo(x,y);
	printf("sumTwo : %d\n",output);
	printf("square : %d\n", square(x));
	printf("get_max : %d\n", get_max(x,y));
	
	return 0;
}
