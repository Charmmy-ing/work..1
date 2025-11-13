#include<stdio.h>
int main()
{
	int e=0, w=0, n=0, o=0;
	int c;
	printf("PLEASE ENTER:");
	while((c=getchar())!='\n')
	{
		if (c>='A' && c <= 'Z' || (c>='a' && c <= 'z'))
			e++;
		else
			if (c == ' ')
				w++;
			else
				if (c <= '9' && c >= '0')
					n++;
				else
					o++;
	}
	printf("%d,%d,%d,%d", e, w, n, o);
	printf("\n");
	return 0;
}