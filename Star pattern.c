//program to find the star pattern with for loop condition//

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n",a);
    scanf("%d",&a);
for(int i=6;i>1;i--)
{
    for(int j=1;j<i;j++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
