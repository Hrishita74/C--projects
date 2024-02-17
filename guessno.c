#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int num,data,guess=1;
	srand(time(0));
	num=rand()%100+1;
	do
	{
		printf("\n guess the number from 0 to 100");
		scanf("\t%d",&data);
		if(data>num)
			printf("\n you guessed too high");
		else if(data<num)
			printf("\n you guessed too low");
		else
		{
			printf("\nhurray!you guessed the no. in %d attempts",guess);
		}	
		guess++;
	}
	while(data!=num);
	return 0;
}

		




