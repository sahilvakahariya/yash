#include<stdio.h>

void printMenu(){
	int ch;
int qty;
char ch1;
	printf("1. pizza   ----180");
	printf("\n2. burger   ----100");
	printf("\n3. Dosa   ----120");
	printf("\n4. Idli   ----50");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("pizza");
			printf("\n Enter qty");
			scanf("%d",&qty);
			printf("\n Total sum:%d",180*qty);
		break;
		case 2:
			printf("burger");
			printf("\n Enter qty");
			scanf("%d",&qty);
			printf("\n Total sum:%d",100*qty);
		break;
		case 3:
			printf("pizza");
			printf("\n Enter qty");
			scanf("%d",&qty);
			printf("\n Total sum:%d",180*qty);
		break;
		case 4:
			printf("dosa");
			printf("\n Enter qty");
			scanf("%d",&qty);
			printf("\n Total sum:%d",50*qty);
		break;
		default:
		    printf("Wron choice");
		break;		
	}

}
main(){
	int ch1;
	while(1){
		printMenu();
		printf("\n You want to place more order press 1");
		scanf("%d",&ch1);
		if(ch1==2 ){
			break;
		}
	}
	
	
	
}
