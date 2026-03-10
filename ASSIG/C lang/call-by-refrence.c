#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
main(){
	int a=500,b=820;
	swap(&a,&b);
	printf("\n a=%d and b=%d",a,b);
}
