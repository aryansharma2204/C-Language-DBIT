//WAP to enter 10 numbers from the user and print the greatest number using for loops only.

#include<stdio.h> 
 
int main() 
{ 
	int i, num, gr=0; 
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