#include <stdio.h>

/* Author: Wesley Viana
 * Email: viana.wesley@gmail.com
 * Desciption: Code developed in college to Discrete Math Class
 * it shows the implemetation of some logic operations
 */

int main(int argc, char **argv)
{
	int r, s;
	int p;
	
	printf("Conjunction\n");
	printf("| r | s | x |\n");
	for(r=0;r<=1;r++)
		for(s=0;s<=1;s++)
		{
			if(s==1&&r==1)
				p=1;
			else
				p=0;
			
			printf("| %-2d| %-2d| %-2d|\n",r,s,p);
		}
		
	printf("\n\nDisjunction\n");
	printf("| r | s | x |\n");
	for(r=0;r<=1;r++)
		for(s=0;s<=1;s++)
		{
			if(s==1||r==1)
				p=1;
			else
				p=0;
			
			printf("| %-2d| %-2d| %-2d|\n",r,s,p);
		}
	
	printf("\n\nImplication\n");
	printf("| r | s | x |\n");
	for(r=0;r<=1;r++)
		for(s=0;s<=1;s++)
		{
			if(r==1&&s==1)
				p=1;
			else if(r==0)
				p=1;
			else
				p=0;
			
			printf("| %-2d| %-2d| %-2d|\n",r,s,p);
		}
	
	
	printf("\n\nEquivalencia\n");
	printf("| r | s | x |\n");
	for(r=0;r<=1;r++)
		for(s=0;s<=1;s++)
		{
			if(r==s)
				p=1;
			else
				p=0;
			
			printf("| %-2d| %-2d| %-2d|\n",r,s,p);
		}
	
	printf("\n\nNegação\n");
	printf("| r | x |\n");
	for(r=0;r<=1;r++)
	{
		if(r==1)
			p = 0;
		else
			p = 1;

		printf("| %-2d| %-2d|\n",r,p);
	}

	
	getchar();
	return 0;
}

