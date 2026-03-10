#include<stdio.h>
//6! =6*5! 6*5*4! 6*5*4*3! 6*5*4*3*2! 6*5*4*3*2*1!
int factfind(int num){
	if(num==1){
		return 1;
	}
	int f;
	f=num*factfind(num-1);//6*ff(5)
	return f;
}
main(){
	printf("\n factorial =%d",factfind(6));
}
