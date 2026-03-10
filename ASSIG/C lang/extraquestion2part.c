#include<stdio.h>
main(){
	int max,min;
	int a,b,c;
	printf("\n number of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	
	max=(a>b)?a:(b>c?b:c);
	printf("\n max value=%d",max);
    
	min=(a<b)?a:(b<c?b:c);
	printf("\n min value=%d",min);  
}

