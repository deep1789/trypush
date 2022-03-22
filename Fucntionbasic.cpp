#include<stdio.h>
#include<math.h>

void welcome(void); //function declaration/prototype
void timefunc();
int main() //calling function
{
	
	printf("\nStep 1");
	printf("\nStep 2");
	printf("\nStep 3");
	printf("\nStep 4");
	
	welcome(); //function call -->never add RT
	
	
	printf("\nStep 5");
	printf("\nStep 6");
	printf("\nStep 7");
	
	
    return 0;
}
	
void welcome()  //function definition
{
	printf("\ngood evening");
	
	printf("\nwelcome function ends");
	
	timefunc();
	
	}	

void timefunc()
{
	
	printf("Time is 18:50hrs");
}

