#include<stdio.h>
int i,j;
void getArray(int ar[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n enter array[%d][%d]",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
}
void sumofArray(int a[2][2],int b[2][2],int c[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void printArray(int arr[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t arr[%d][%d]=%d",i,j,arr[i][j]);
		}
		printf("\n");
	}
}
	main(){
		int a[2][2],b[2][2],c[2][2];
		getArray(a);
		printArray(a);
		printf("\n====================\n");
		getArray(b);
	    printArray(b);
		printf("\n====================\n");
	sumofArray(a,b,c);
	printArray(c);
	}
	
