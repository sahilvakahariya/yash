#include<stdio.h>
//nested if
main()
{
	int maths,phys,chem,total,subtotal;
	printf("\n enter maths phys chem marks");
	scanf("%d %d %d",&maths,&phys,&chem);
	if(maths>= 65 &&phys>=55 && chem>=50)
	total=maths+phys+chem;
	subtotal=maths+phys;
	if(total >=190 ||subtotal >145){
		printf("eligible admision");
		
	}
	else{
		printf("\n not eligible =>inner ");
	
}
	

     else{
	printf("\n not eligible => outer");
}
}
