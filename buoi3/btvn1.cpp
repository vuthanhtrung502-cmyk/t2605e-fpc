#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	c = a * b;
	while(a != b){
		if(a > b){
		a = a - b;
		}else{
		b = b - a;
		}
	}
	printf("\nUCLN la: %d\n", a);
	printf("BCNN la: %d", c/a);
}
