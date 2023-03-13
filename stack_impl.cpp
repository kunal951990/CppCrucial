#include <iostream>
using namespace std;

struct Stack{
    int top = -1;
    int *ptr;
    int capacity;
};

Stack * createStack(int capacity);
int isFull(Stack * stack);
int isEmpty(Stack * stack);
void push(Stack * stack);
int pop(Stack * stack);

int main()
{
    Stack *stackptr;
    int capacity;
    cout<<"Enter Capacity of Stack : "<<endl;
    cin>>capacity;
    stackptr = createStack(capacity);

    // Pushing elements to stack
    for(int i = 0; i<stackptr->capacity; i++)
    {
        push(stackptr);
    }

    // Popping element for stack;
    int k = pop(stackptr);

    // Printing element from stack.
    for(int i = 0; i<=stackptr->top; i++)
    {
        cout<<stackptr->ptr[i]<<endl;
    }

    return 0;

}

Stack * createStack(int capacity)
{
    Stack *temp = new Stack();
    temp->capacity = capacity;
    temp->ptr = new int[temp->capacity];
    return temp;
}

int isFull(Stack *stack)
{
    if(stack->top == stack->capacity - 1)
    {
        cout<<"Stack is Full."<<endl;
        return 1;
    }
    else 
    {
        cout<<"Stack is having space."<<endl;
        return 0;
    }
}

int isEmpty(Stack *stack)
{
    if(stack->top ==  - 1)
    {
        cout<<"Stack is empty."<<endl;
        return 1;
    }
    else
    {
        cout<<"Stack is having space."<<endl;
        return 0;
    }
}

void push(Stack *stack)
{
    if(isFull(stack) == 1)
    {
        cout<<"Stack is full."<<endl;
    }
    else
    {
        stack->top++;
        cout<<"Enter element. "<<endl;
        cin>>stack->ptr[stack->top];
    }
}

int pop(Stack *stack)
{
    int data = -1;
    if(isEmpty(stack) == 1)
    {
        cout<<"Stack is Empty."<<endl;
    }
    else
    {
        data = stack->ptr[stack->top];
        stack->top--;
    }
    cout<<"Popped data is : "<<data<<endl;
    return data;
}