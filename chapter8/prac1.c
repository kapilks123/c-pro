//%c,%s write a program to take string as an input from the user %c and %s confirm that the strings are equal
#include<stdio.h>
#include<string.h>
int main()
{
    char st1[34]; //array inside length;
    char st2[34];
    char c;
    int i=0;
    printf("enter the of first string\n");
    scanf("%s",st1);    // in pu t print %s
    printf("enter the value of second string character by character\n");
    scanf("%c",st2);

    while(c!='\n'){        //program will not exit take a scanf value to move forward becouse of \n coming out again
        fflush(stdin);//put  a frash character 
        scanf("%c",&c);   //print %c  if you using %c as input it code become little bit complicated
        //scanf after take another scanf fflush acid for separate
    
        st2[i]=c; //take e.g of t st2[t]=c
        i++;
    }
    st2[i-1]='\0'; //null character put -1, -2 , value will be not occur of null character 
    printf("the value of st1 is  %s\n",st1);
    printf("the value of st2 is %s\n",st2);
    printf("strcmp for these strings returns %d",strcmp(st1,st2));

    return 0;

    }
//expalin= we need to do '\n' to do '%0'
        //so that's [i-1]