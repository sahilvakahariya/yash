#include<stdio.h>
main(){
	int r,l,base,h;
	int choice;
	float area;
	
	printf("\n press 1 for are of circle");
	printf("\n press 2 for are of square");
	printf("\n press 3 for are of tringle");
	printf("enter choice");
	scanf("%d",&choice);

switch (choice){
	case 1:
		printf("\n enter radius");
		scanf("%d",&r);
		printf("\n are of circle=%f",(3.14*r*r));
		break;
	case 2:
		printf("\n enter len");
		scanf("%d",&l);
		printf("\n are of square=%d",(l*l));
		break;
		case 3:
		printf("\n enter base and height");
		scanf("%d %d",&base,&h);
		area=((float)base*h)/2;
		printf("\n are of tringle=%f",area);
		break;
		default:
			printf("\n wrong choice");
			break;
		}
}
