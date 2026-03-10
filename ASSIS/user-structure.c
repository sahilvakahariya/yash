#include<stdio.h>
struct student{
	int id;
	char name[20];
	float per;
	};
main(){
	struct student s1;
	printf("\n enter id name and percentage");
	scanf("%d %s %f",&s1.id,s1.name,&s1.per);
	printf("\n name of student=%s",s1.name);
    printf("\n name of id=%d",s1.id);
	printf("\n name of percentage=%.2f",s1.per);
}
