#include<stdio.h>
main(){
	int num;            
	printf("\n enter a integer:");
	scanf("%d",&num);

 if (num % 2 == 0) {
 	printf("\n number is a even");
 }
 else{
printf("\n number is a odd");
 }
 // Check positive, negative, or zero using relational operators
 if(num > 0){
 	printf("\n positive ");
 }
 else if (num <0 ){
 	printf("\n negative");
 }
 else{
 	printf("\n nothing");
 }
  // Check if multiple of both 3 and 5 using logical AND operator
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else {
        printf("The number is NOT a multiple of both 3 and 5.\n");
    }

    return 0;
}

