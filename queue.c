#define MAX 10

void enqueue();
void dequeue();
void display();

int queue[MAX], front = -1, rear = -1;

void main()
{
   int choice;
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: 
		 enqueue();
		 break;
	 case 2: dequeue();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void enqueue(){
  int value;
   if(rear == MAX-1)
   {
     
   printf("\nQueue is Full!!! Insertion is not possible!!!");
   }
   else{
     printf("Enter the value to be insert: ");
		 scanf("%d",&value);
      if(front == -1)
	 front = 0;
      rear++;
      queue[rear] = value;
      printf("\nInsertion success!!!");
      display();
   }
}
void dequeue(){
   if(front == rear)
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted the element : %d", queue[front]);
      front++;
      if(front == rear)
	 front = rear = -1;
	 display();
   }
}
void display(){
   if(rear == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d\t",queue[i]);
   }
}