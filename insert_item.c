#include <stdio.h>
int main()
{
    int a = 6, element,item;
    int A[] = {1,2,3,4,5,6};
    
    for (int i = 0; i<a;i++)
        printf("%d ",A[i]);
    printf("\n");
    
    printf("Enter the number to be inserted and the element before it : ");
    scanf("%d%d",&item,&element);
    
    for (int i = 0; i<a;i++)
    {
        if (A[i]==element)
        {
            for (int j=a;j>i+1;j--)
                A[j]=A[j-1];
            A[i+1]=item;
            a++;
        }
    }
    for (int i = 0; i<a;i++)
        printf("%d ",A[i]);
}
