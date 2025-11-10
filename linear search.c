#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int item_search ,i;
	 printf("\n Array elemrnt are :   ");
      for(i=0; i<5;i++)
      {
      	printf("%d ",arr[i]);
	  }
	printf("Enter element to search:");
	scanf("%d",&item_search);
	
	for(i=0;i<5; i++){
	
	if(arr[i]==item_search)
	{
		printf("Found at position %d",i);
		return 0;
	}
}
      printf("not found");
      return 0;
}
