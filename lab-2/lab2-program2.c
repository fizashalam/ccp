#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("enter a number:");
    scanf("%d",&x);
    y=x%100;
    z=y/10;
    printf("digit in tens place is=%d",z);
    return 0;

}
