#include<stdio.h>
int main()
{

    int a,b;
    printf("input the value for number1:");
    scanf("%d",&a);
    printf("input the value of number2:");
    scanf("%d",&b);
    if (a==b){
        printf("number1 and number2 are equal\n");
    }
    else {
        printf("number1 and number2 are not equal\n");
    }
    return 0;
}
