#include<stdio.h>
//reverse string without using strelen function
main(){
	char str[20],rev[20];
	int i=0,j=0;
	printf("\n enter str");
	gets(str);
	printf("\n str=%s",str);
	
	while(str[i]!='\0'){
		i++;
	}
	
	i--;
	printf("\n len of str=%d",i);
	while(i>=0){
		rev[j]=str[i];
		i--;
		j++;
	}
	rev[j]='\0';
	printf("\n strrev=%s",rev);
		}
	
