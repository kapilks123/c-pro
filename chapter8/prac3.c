//write a function slice() a string it should the original string such as it is now the sliced 
///string , take m and n as the start and ending position for slice
//slice is string used for breaks 
#include<stdio.h>
void slice(char *st, int m, int n){
        int i=0;
        while((m+i)<n){ //while loop run milega format pass by mainn to the loop to string length
            st[i]=st[i+m];//it will loop run until they get n
            i++;//start from 0 given i=0
            
        }
        st[i]='\0';
    }
int main(){
    char st[]="kapil";
    slice(st,1,7);//format of slice 1 to 6 in a string from kapil you have take value from 1 to 7
    printf("%s",st);
    return 0;
}
//explain= st[i]=st[i+m];
//st[1]=st[1+1];
//st[2]just like this value oass take value  this is best method for slice
