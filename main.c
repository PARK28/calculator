#include <stdio.h>
 

int sub(int, int);

 
int main(int argc, char* argv[])
{
	int number1, number2, result;
	char operator;
	
	printf("Please enter a expression: ");
	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		
		case '-':
			result = sub(number1, number2);
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
 
int sub(int number1, int number2)
{
	//TODO implementation
	return 0;
}
 
