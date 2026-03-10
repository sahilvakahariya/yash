#include<stdio.h>
#include<string.h>
int main(){
	char str[102];
	int length;
	printf("enter a string");
	fgets(str,sizeof(str),stdin);
	length=strlen(str);
	printf("total number of characters=%d\n",length);
	return 0;
	}

