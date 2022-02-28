#include<stdio.h>
int occurence(char st[],char c){
    char *ptr=st;//pointer VALUR POINT TO THE STRING
    int count=0;
    while(*ptr !='\0'){
        if(*ptr==c){
        count++;
        
    }
   ptr++;

}
return count;
}
int main(){
    char st[]="kapilfdghjkoiuytrdfvbnmkjiuytf";
    int count=occurence(st, 'y');//try put thte number the another also  // it say jnimber of lettwr in words
    printf("occurences = %d",count);
    return 0;
}