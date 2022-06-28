//Partially Executed
// Queue implementation

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define size 5
int front=-1;
int rear=-1;
int queue[size];

void enque(){
	int data;
	printf("Enter element to enque\n");
	scanf("%d",&data);
	if(rear==size-1){
		printf("Queue over flow ");
	}
	else {
	if(front==-1 && rear==-1){
		front=0;
		rear=0;
		queue[rear]=data;//if front and rear are at 0 then add data value by rear 
		} else
		{
		rear++;
		queue[rear]=data;//rear was was not same as front value is increment rear and store value
	}
		
		//printf("The added element is %d",queue[rear]);
	}
}

void deque(){
	if(front==-1 && rear==-1){
		printf("Queue is empty");
	}else {
		if(front==rear){
			front=-1;
			rear=-1;}else {
			
				
		printf("Deleted element is %d \n",queue[front]);
		front++;
	}//if(front>rear){
	//	front=rear=-1;
	}
}

void peek()
{
	if(front==-1 && rear==-1){
		printf("Nothing to print");
	}else {
		printf("The first  element is %d \n",queue[front]);
	}
	}


void display(){
if(front==-1 && rear==-1){
		printf("Nothing to print");	
}else {
		for (int i=front;i<=size-1;i++){
			printf("The elements in Queue are %d\n ",queue[i]);
		}
	}
}



int main(){

	int x;
	printf("Enter 1)To enque\n 2)To deque\n 3)To peek\n 4)To display\n 5)To Exit");
	scanf("%d",&x);

	switch(x){
	case 1 : enque();
	break;
	case 2 : deque();
	break;
	case 3: peek();
	break;
	case 4: display();
	break;
//	case 5 : exit();
//	break;
	default : printf("Invalid choice");
		
	};
	return 0;
}
