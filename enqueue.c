#include<stdio.h>
#define SIZE 5
void enqueue(int queue[], int *front ,int *rear,int item)
{
	if (*rear== SIZE-1){
		print("oueue is FULL! insertion is not possible:");
		return;
	}
	if(*front== -1){
		*front=0;
	}
	(*rear)++;
	queue[*rear]-item;
	print("%d inserted into the queue\n",item);
}
int main()
{
	int i;
	
	int queue[SIZE];
	int front=-1,rear=-1;
	enqueue(queue,&front,&rear,10);
	enqueue(queue,&front,&rear,20);
	enqueuq(queue,&front,&rear,30);
	enqueue(queue,&front,&rear,40);
	enqueue(queue,&front,&rear,50);
	
	printf("\ncurrent queue:");
	if(front==-1)
	printf("queue is empty .\n:");
	else{
		for(i=front; i<=rear;i++){
			printf("%d",queue[i]);
		}
		printf("\n");
	}
	return 0;
}
