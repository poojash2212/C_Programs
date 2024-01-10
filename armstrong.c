#include<stdio.h>
int cubesum(int n);
int isarmstrong(int n);
int printarmstrong(int n);
//armstrong is sum of cube of each digit of a number
int main()
{
	int n;
	printf("enter the number");
	scanf("%d", &n);
	printarmstrong(n);
	return 0;
}
int cubesum(int n)
{
	int cube, sum = 0, rem;
	while (n > 0)
	{
		rem = n % 10;
		n = n / 10;
		cube = rem * rem * rem;
		sum = sum + cube;
	}
	return sum;
}
int isarmstrong(int n)
{
	int num = n;
	int sum = 0;
	sum = cubesum(n);
	if (sum == num)
	{
		return 1;
	}
	else
		return 0;
}
int printarmstrong(int n)
{
	int flag;
	flag = isarmstrong(n);
	if (flag == 1)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}

}


