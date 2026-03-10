#include<stdio.h>
main(){
	int a=50;
	int *ptr=&a;//pointer declare
	printf("\n address=%p and value=%d",ptr,*ptr);//deref
	
	*ptr=500;
	printf("\n a=%d",a);
}
