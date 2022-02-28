//
#include <stdio.h>
int present(char st[],char n){
char *ptr=st;
int x=0;
while (*ptr!='\0')
{
if (*ptr==n)
{
printf("The character %c is presernt in the string",n);
x++;
}
ptr++;
}
if (x==0)
{
printf("The character %c is not presernt in the string",n);
}
}
int main()
{
char c[50];
printf("Enter the string:-");
gets(c);
char n;
printf("Enter the character for which you want to know that the character is present or not:-");
scanf("%c",&n);
present(c,n);
return 0;
}
