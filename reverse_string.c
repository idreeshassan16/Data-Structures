#include<stdio.h>
int main()
{
    char name[100];

    printf("Enter the name: ");
    scanf("%99s",name);                   // Limiting input to 99 characters to prevent overflow

    int i = 0,len=0;
    while(name[i] != '\0')
    {
        len++;i++;
    }
    
    for(i=len-1;i>=0;i--)
        printf("%c",name[i]);
    return 0;
}