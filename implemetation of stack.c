#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top = -1;
    printf("Enter size of stack[MAX=100]: \n");
    scanf("%d", &n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t 1. PUSH \n\t 2. POP \n\t 3. DISPLAY \n\t 4. EXIT\n");
    do
    {
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\t Please enter valid choice ");
        }
        }
    } while (choice != 4);
    return 0;
}

void push()
{
    if (top >= n - 1)
        printf("Stack Overflow\n");
    else
    {   
        printf("Enter value to be pushed ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}
void pop()
{
    if (top <= -1)
       printf("Stack Underflow\n");
    else
    {
        printf("The popped element is %d\n" , stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n Press next choice\n");
    }
    else
        printf("The STACK is empty\n");
}