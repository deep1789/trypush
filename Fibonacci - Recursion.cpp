#include<stdio.h>
#include<math.h>
int fibo(int n);
int main() 
{
	int n=0, a=0,b=0;
	printf("Enter the value of n");
	scanf("%d",&n);

	int result = fibo(n);
	printf("\nvalue at %dth is %d",n,result);
	
	return 0;
}


int fibo(int n)
{
	if(n<=1)
	return n;
	
	return (fibo(n-1) + fibo(n-2));
}
