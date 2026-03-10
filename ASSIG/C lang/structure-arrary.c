#include<stdio.h>
struct student{
	int id;
	char name[20];
	float per;
	};
main(){
	struct student s[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n enter id name and percentage of student %d",i+1);
		scanf("%d %s %f",&s[i].id,&s[i].name,&s[i].per);
	}
	printf("\nName \t id \t percentage\n\n");
	for(i=0;i<5;i++){
		printf("\n%s",s[i].name);
		printf("\t %.2f",s[i].per);
		printf("\t %d",s[i].id);
	}
}
