#include<stdio.h>

//without return type without parameter
void display(){//function definition
printf("\n SAHIL PATEL");
}
//without returntype with parameter
void add(int a,int b){
	printf("\n addition of %d and %d = %d",a,b,a+b);
}
//with return type with parameter
float areacircle(int r){
	float a=3.14*r*r;
	return a;
}
//with return type without parameter
int square(){
	int num;
	printf("\n Enter num");
	scanf("%d",&num);
	return num*num;
}
main(){
	display();
	add(500,250);
	float area=areacircle(3);
	printf("\n area of circle =%f",area);
	printf("\n square =%d",square());
}
