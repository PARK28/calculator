#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int number1, number2, result;
	char operator;
	
	printf(" 계산할 식을 입력하세요 (예, 7 + 7 ): ");
	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			result = add(number1, number2);
			break;
		case '-':
			result = sub(number1, number2);
			break;
		case '*':
			result = multi(number1, number2);
			break;
		case '/':
			result = div(number1, number2);
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int number1, int number2)
{
	//추가 1 2 3 4
	int sum;
	sum = number1 + number2;
	return sum;
}
 
int sub(int number1, int number2)
{
	//TODO implementation
	return 0;
}
 
int multi(int number1, int number2)
{
	int multi;

	multi = number1 * number2;

	return multi;
}
 
int div(int number1, int number2)
{
	//TODO implementation
	return 0;
}