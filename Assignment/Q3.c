//Write 2 program to enter SP and CP from the user and print profit% and loss%.
#include <stdio.h>

int main()
{
    int cp,sp, amt; 

    printf("\tAryan Sharma");
    printf("\n");
    
    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        /* Calculate Profit */
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        /* Calculate Loss */
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}