#include<stdio.h>
int main()
{
FILE * fp;
char input[100];
int i;
fp=fopen("BMSCE.text","w");
printf("Enter the content to be inputted into the file:\n ");
gets(input);
fprintf(fp,"%s",input);
fp=fopen("BMSCE.text","r");
printf("Data read:");
fscanf(fp,"%s",input);
printf("\n %s",input);
fclose(fp);
return 0 ;
}
