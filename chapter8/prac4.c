//write you own version of strcpy functionfrom <string.h>
#include<stdio.h>
#include<string.h>//strlmn is function from the string 


int main(){
    char st[]=  "kapil shelar";
    char *ptr=st;
    for ( int n = 0;  n<st; n)
    {
    
        char st2 [n];
        strcpy(st2,st);
        printf("now the st2 is %s \n",st2);
        //scanf("%s",&st2);
        
        
    }

    return ptr++;
}//it will nmot include the  null character