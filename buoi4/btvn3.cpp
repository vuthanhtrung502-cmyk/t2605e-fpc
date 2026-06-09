#include <stdio.h>
int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
    	printf("Nhap so: ");
    	scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	int flag = 0;
	4
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			printf("Da tim thay");
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("Khong tim thay");
	}
}
