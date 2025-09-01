#include<stdio.h>
int main(){
 int n,i,sum ;
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	sum=sum+i*i;
}
   printf("sum of square of first %d natural numbers =%d",n,sum);
   return 0;
}
