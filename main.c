#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer_n(void);
int get_integer_r(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
	int a, b;
	a = get_integer_n();
	b = get_integer_r();
	
	printf("C(%d, %d) = %d\n", a, b, combination(a,b));
	return 0;	
}

int get_integer_n(void)
{
	int n;
	printf("Combination 계산을 위한 n을 입력하시오. : ");
	scanf("%i", &n);
	return n;
}

int get_integer_r(void)
{
	int r;
	printf("Combination 계산을 위한 r을 입력하시오. : ");
	scanf("%i", &r);
	return r; 
}

int factorial(int n)
{
	int i;
	int res = 1;
	for(i = 1; i <= n; i++)
	    res = res*i;
	return res;
}

int combination(int n, int r)
{
	return (factorial(n)/(factorial(r)*factorial(n-r)));
}



