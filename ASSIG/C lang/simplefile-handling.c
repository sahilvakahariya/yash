#include<stdio.h>
main(){
	FILE *fp;
	char data[20];
	fp = fopen("test.txt","w");
    if(fp==NULL){
    printf("\n error avi gyi");	
	}
	fprintf(fp,"%s","SAHIL PATEL");
	fclose(fp);
	
	fp=fopen("test.txt","r");
	fscanf(fp,"%s",data);
	printf("\n reading data from files=%s",data);
	fclose(fp);
	}
	
