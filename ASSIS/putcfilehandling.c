#include<stdio.h>
main(){
	FILE *fp;
	char data[20],ch;
	fp = fopen("test1.txt","w");
    if(fp==NULL){
    printf("\n error avi gyi");	
	}
	fputc('S',fp);
	fclose(fp);
	
	fp=fopen("test1.txt","r");
	ch=fgetc(fp);
	printf("\n reading data from files=%c",ch);
	fclose(fp);
	}
	
	
