#include<stdio.h>
#include<math.h>
void fibo(int a, int b, int n);
int main() 
{
	int n=0, a=0,b=0;
	printf("Enter the term till where you want to print fibo series");
	scanf("%d",&n);
	
	a = 0;
	b = 1;
	
	printf("%d %d",a,b);
	
	fibo(a,b,n);
	
	return 0;
}


void fibo(int a, int b, int n)
{
	int i =0, c=0;	
	for(i=2; i<=n; i++)
	{
		
		c = a+b;
		printf(" %d",c);
		a = b;
		b = c;
		
	}
	
}
