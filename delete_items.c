#include<stdio.h>

int main()
{
    int n = 8;
    int A[] = {1,4,2,3,4,5,4,2};
    int item, x = 0;
    for (int i = 0; i< n; i++)
        printf("%d ",A[i]);
    printf("\n");

    printf("Enter the item to be deleted ");
    scanf("%d",&item);

    for (int i = 0; i<n;i++)
    {
        if(A[i]==item)
        {
            x = i;
            for (int i = x; i < n-1;i++)
            {
                A[i]=A[i+1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i< n; i++)
        printf("%d ",A[i]);

}