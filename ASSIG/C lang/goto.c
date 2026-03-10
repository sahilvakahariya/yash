#include<stdio.h>
main(){
	int num;
	printf("enter a num");
	scanf("%d",&num);
	if(num%2==0){
		goto EVEN;
	}
		else{
			goto ODD;
		}
		EVEN:{
		printf("\n num is even");
		return;
		}
		ODD:{
				printf("\n num is odd");
				return;
		}
	}

