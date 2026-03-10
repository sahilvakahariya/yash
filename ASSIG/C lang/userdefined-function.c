#include<stdio.h>
void display();
void add(int,int);
float areacircle(int);
main(){
	display();//calling
	add(250,320);
	float area=areacircle(3);
	printf("\n area of circle =%f",area);
}
/*
return-type function-name(p1,p2,p3){
			block
}
*/
void display(){//function definition
printf("\n SAHIL PATEL");
}
void add(int a,int b){
	printf("\n addition of %d and %d = %d",a,b,a+b);
}
//function as returning value
float areacircle(int r){
	float a=3.14*r*r;
	return a;
}
	

