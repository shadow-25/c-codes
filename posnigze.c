#include<stdio.h>
void main (){
    int a;
    printf("Enter a integer  ");
    scanf("%i",&a);
    if(a>0){
        printf("It is a Positive No.");
    }
    else if(a<0){
        printf("Its is a negative No.");
    }
    else{
        printf("It is zero");
    }
    getch();
}