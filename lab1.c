#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p, i;
	p = (int *) malloc(5 * sizeof(int));
	if(p == NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	for(i = 0; i<5; i++)
	{
		p[i] = i+1;
	}
	
	printf("elements are:");
	for(i=0; i<5; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	return 0;
}
