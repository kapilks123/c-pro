#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();


int main(){
    goodmorning();  //dirctly ca;lling function then good morning calling good afternoon in defination part
    

    
    return 0;
}
void goodmorning(){
    printf("good morning kapil \n");
     goodafternoon();
    

}
void goodafternoon(){
    printf("good afternoon kapil \n");
    goodnight();
}
void goodnight(){
    printf("good night kapil \n");
}