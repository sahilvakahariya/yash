#include<stdio.h>
struct product{
	char description[50];
	char name[20];
	float price;
	};
main(){
	struct product s[2];
	int i;
	for(i=0;i<2;i++){
		printf("\n enter name description and price of product %d",i+1);
		scanf("%s %f %s",s[i].description,s[i].name,&s[i].price);
	}
	printf("\nName \t price \t description\n\n");
	for(i=0;i<2;i++){
		printf("\n %s",s[i].name);
		printf("\t %f",s[i].price);
		printf("\t %s",s[i].description);
	}
}
