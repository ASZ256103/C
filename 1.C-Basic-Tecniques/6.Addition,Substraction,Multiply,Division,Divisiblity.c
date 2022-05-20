#include<stdio.h>
int main()
{

	int a,b,addition,substraction,multiply,division,divisibility;

	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	addition=a+b;
	substraction=a-b;
	multiply=a*b;
	division=a/b;
	divisibility=a%b;

	printf("Addition=%d\n",addition);
	printf("Substraction=%d\n",substraction);
	printf("Multiply=%d\n",multiply);
	printf("Division=%d\n",division);
	printf("Divisibility=%d\n",divisibility);

	return 0;

}
