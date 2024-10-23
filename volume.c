#include<stdio.h>
#define pi 3.14
int vol_cyl(int r, int h){
float vol;
vol = pi*r*r*h;
return vol;
}
int vol_cube(int l){
int vol;
vol =l*l*l;
return vol;
}
int vol_sp(int r){
float vol = ((((1.33*pi)*r)*r)*r);
return vol;
}

void main(){
    char a;
    printf("Enter c for vol of cylinder , b for vol of cube and s for vol of sphere\n");
    a = getch();
    if (a == 'c'){
	int r,h;
	float vol;
	printf("Enter value of radius ");
	scanf("%d",&r);
	printf("Enter value of height ");
	scanf("%d",&h);
	vol = vol_cyl(r,h);
	printf("volume of cylinder is %d cu.unit",vol);
    }
    else if (a == 'b'){
	int l;
	int vol;
	printf("Enter value of length ");
	scanf("%d",&l);
	vol = vol_cube(l);
	printf("volume of cube is %d cu.unit",vol);
    }
    else if (a == 's'){
	int r;
	float vol;
	printf("Enter value of radius ");
	scanf("%d",&r);
	vol = vol_sp(r);
	printf("vol of sphere is %g cu.unit",vol);
    }
    else {
	printf("Enter right char");
    }
    getch();
}