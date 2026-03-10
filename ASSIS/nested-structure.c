#include<stdio.h>
struct sub{
	char name[50];
	int marks;
};
struct student{
	int id;
	char name[50];
	float per;
	struct sub sub1;
};
main(){
	struct student s1;
	printf("\n enter id name and percentage");
	scanf("%d %s %f",&s1.id,s1.name,&s1.per);
	printf("\n enter sub1 name and marks");
	printf("\n name of the student=%s",s1.name);
	printf("\n name of the student=%s",s1.name);
	printf("\n  id=%d",s1.id);
	printf("\n percentage=%.2f",s1.per);
	printf("\n submarks=%s",s1.sub1.name);
	printf("\n marks=%d",s1.sub1.marks);
}



