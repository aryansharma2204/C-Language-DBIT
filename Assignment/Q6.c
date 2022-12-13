//Write a program to enter 10 numbers from the user and print the greatest one.

#include<stdio.h> 
 
int main() 
{ 
	int i, num, gr=0; 

	printf("\tAryan Sharma");
    printf("\n");
	
	printf("\nEnter 10 numbers : "); 
	for(int i=1;i<=10;i++) 
	{ 
		scanf("%d",&num); 
		if(num>gr) 
        {
            gr = num;
        } 
	} 
	printf("\nThe Greatest Number is %d", gr); 
} 