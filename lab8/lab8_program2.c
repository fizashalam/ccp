#include<stdio.h>
void main()
{
    struct student
    {
        int rollno;
        char name[30];
        char sec[5];
        char dept[30];
        int totalmarks;
    }s1,s2;
    printf("enter the roll number of s1 and s2\n");
    scanf("%d%d",&s1.rollno,&s2.rollno);
    printf("enter the name of s1 and s2\n");
    scanf("%s%s",&s1.name,s2.name);
    printf("enter section of s1 and s2\n");
    scanf("%s%s",s1.sec,s2.sec);
    printf("enter the department of s1 and s2\n");
    scanf("%s%s",s1.dept,s2.dept);
    printf("enter the total marks of s1 and s2\n");
    scanf("%d%d",&s1.totalmarks,&s2.totalmarks);
    printf("s1 information =\n");
    printf("roll no=%d\n",s1.rollno);
    printf("name=%s\n",s1.name);
    printf("section=%s\n",s1.sec);
    printf("department=%s\n",s1.dept);
    printf("total marks=%d\n \n",s1.totalmarks);
    printf("student 2 information =\n ");
    printf("roll no=%d\n",s2.rollno);
    printf("name=%s\n",s2.name);
    printf("section=%s\n",s2.sec);
    printf("department=%s\n",s2.dept);
    printf("total marks=%d\n \n",s2.totalmarks);
    if(s1.totalmarks>s2.totalmarks)
    {
        printf("student 1 scored highest marks\n");
    }
    else
    {
        printf("student 2 scored highest marks\n");
    }
}
