#include<stdio.h>
int main()
{
	int i,integer=2;
	int j, sign,l=0;
	while(integer < 200)
	{
			sign = 1;
			for (j = 2; j <integer; j++)
			{
				if (integer % j == 0)
				{
					sign=0;
					break;
				}
			}
			if (sign)
			{
				printf("%d\t", integer);
				l++;
				if (l % 5 == 0)
				{
					printf("\n");
				}
			}
			integer++;
	}
	return 0;
}
