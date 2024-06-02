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
            for (int j = i; j < n-1;j++)
            {
                A[j]=A[j+1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i< n; i++)
        printf("%d ",A[i]);

}
