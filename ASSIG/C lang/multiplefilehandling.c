#include<stdio.h>
main(){
	FILE *fp;
	char name[20],email[50],ch;
	int enroll,i;
	fp =fopen("student.csv","w");
	for(i=1;1<=3;i++){
		printf("\n enter student details of no=%d",i);
		printf("\n enter enroll name email");
		scanf("%d %s %s",&enroll,name,email);
	}
	fclose(fp);
	fp=fopen("student.csv","r");
	printf("\nenroll\tname\temail\n");
	while((ch=fgetc(fp))!=EOF){
		if(ch==','){
			putchar('\t');
			continue;
			
		}
		putchar(ch);
	}
	fclose(fp);
	
	}
