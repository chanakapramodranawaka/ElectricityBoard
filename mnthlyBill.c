#include <stdio.h>
int main(void)
{
    int bill_amount,total,count;

    for(count=1; count<=10; count ++)
    {
        printf("Please enter %d bill amount \n",count);
        scanf("%d",&bill_amount);
        total = bill_amount + total;
    }

    printf("Total is : %d", total);

    return 0
}
