#include<stdio.h>
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	printf("\n in function a=%d and b=%d",a,b);
}
main(){
	int a=250,b=820;
	swap(a,b);
	printf("\n a=%d and b=%d",a,b);
}
