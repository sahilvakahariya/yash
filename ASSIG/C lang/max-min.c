#include<stdio.h>
int main()
{
	int arr[10];
	int row;
	int max=arr[0],min;
	for(row=0;row<10;row++)
	{
printf("\n enter the integer of arr[%d]=",row,arr[row]);
scanf("%d",&arr[row]);
}
min= arr[0];
for(row=0;row<5;row++);
{
	max=(arr[row]>max)? arr[row]:max;
	min=(min < arr[row])? min:arr[row];
}
printf("\n maximum value =%d",max);
printf("\n minimum value =%d",min);
return 0;
}
