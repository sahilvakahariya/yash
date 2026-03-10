#include<stdio.h>
main(){
	FILE *fp;
	char data[20],ch;
	fp = fopen("test3.txt","w");
    if(fp==NULL){
    printf("\n error avi gyi");	
	}
	fputs("surat city",fp);
	fclose(fp);
	
	fp=fopen("test3.txt","r");
	fgets(data,20,fp);
	printf("\n reading data from files=%s",data);
	fclose(fp);
	}
	
	
