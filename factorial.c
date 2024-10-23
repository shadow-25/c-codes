#include<stdio.h>
void main(){
    int a;
    long int b=1;
    int i;
    printf("Enter a Integer  ");
    scanf("%i",&a);
    for (i=a;i>0;i--){
        b=b*i;
    }
    printf("Factorial of %d is %ld",a,b);
    getch();
}