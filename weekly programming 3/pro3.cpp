#include<stdio.h>
int main()
{
	int num;
	printf("PLEASE ENTER THE NUMBER : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d is even!", num);
	}
	else {
		printf("%d is odd!", num);
	}

	return(0);
}