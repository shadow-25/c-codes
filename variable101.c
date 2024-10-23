#include <stdio.h>
#include<stddef.h>
int main(){
    int a = 10;
    float b = 10.10;
    double c = 10.1010101010;
    char d = 'c';
    printf("Integer value is %d\n",a);
    printf("Float value is %f\n",b);
    printf("Double value is %lf\n",c);
    printf("charecter is %c\n",d);
    getch();
    return 0;
}