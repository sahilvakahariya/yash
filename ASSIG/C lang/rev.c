#include<stdio.h>
main(){
	int num,rem,rev=0;
	printf("\n ENTER num");
	scanf("%d",&num);
	while(num !=0){
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	printf("\n rev=%d",rev);
}
