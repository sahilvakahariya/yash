#include<stdio.h>
union employee{
	int id;
	char name[30];
	float per;
};
main(){
	union employee s1={30,'sahil','90'};
	printf("\n name of the employee=%s",s1.name);
	printf("\n name of the id=%d",s1.id);
	printf("\n employee percentage=%f",s1.per);
}



