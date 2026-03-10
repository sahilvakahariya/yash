#include<stdio.h>
main(){
	char ope;
	double a,b,res;
	
	printf("enter the caase:");
	scanf("%c",&ope);
	printf("enter the a and b:");
	scanf("%lf %lf",&a,&b);
	switch(ope)
	{
		case'a':
			res=a+b;
			printf("addition:%.f",res);
			break;
			
        case'b':
			res=a-b;
			printf("substraction:%.f",res);
			break;			
	case'c':
			res=a*b;
			printf("multiplication:%.f",res);
			break;
	case'd':
			res=a/b;
			printf("division:%.f",res);
			break;		
	}
	
}
