#include <stdio.h>
/*
if (condition){
   //block
}else if(cond-1){
     //block
}else if(cond-2){
    //block
}
*/
main(){

  int s1,s2,s3;
  printf("enter all the side");
  scanf("%d %d %d",&s1,&s2,&s3);
  if(s1==s2 && s2==s3 && s3==s1)
  {
  	printf("all equal");
 }
 else if((s1==s2)||(s2==s3)||(s3==s1))
 {
 	printf("two side equal");
 }
 else if(s1!=s2 && s2!=s3 && s3!=s1)
 {
 	printf("not equal");
 	
 }else
 {
 	printf("\n wrong input");
 }
}
