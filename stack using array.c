#define max 50
int top=-1,stack[max];
void Push();
void Pop();
void display();
void main()
{
int ch;
    while(ch!=4)
    {
        printf("Maximum size 0f stack=%d",max);
        printf("\n\n MENU DRIVEN");
        printf("\n1.Push\n2.Pop\n3.display\n4.Exit");
        printf("\n\nEnter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);

            default: printf("\nInvalid choice");
        }
    }
}

void Push()
{
    int v;
    if(top==max-1)
    printf("\nstack is full.");
    else
    {
    printf("\nEnter element to be inserted:");
    scanf("%d",&v);
    top=top+1;
    stack[top]=v;
    display();
    }
}
void Pop()
{
    if(top==-1)
    printf("\nstack is empty");
    else
    {
    printf("\nPopped element:  %d",stack[top]);
    top=top-1;
    display();
    }
}
void display()
{
    if(top==-1)
    printf("\nstack is empty");
    else
    {
    printf("\nElements present in the stack: \n");
    for(int i=0;i<=top;i++)
    printf("%d\n",stack[i]);
    }
}
