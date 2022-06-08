
#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];
void push(int val)
{
if(isfull())
{
printf("\n overflow");
}
else
{
top++;
stack[top]=val;
printf("%d\n",stack[top]);
}
}
void pop()
{
if(isempty())
{
printf("\n underflow");
}
else
{
printf("%d\n",stack[top]);
stack[top]=-1;
top--;
}
}
int isfull()
{
if(top==n-1)
{
return 1;
}
else
{
return 0;
}
}
int isempty()
{
if(top==-1)
{
return 1;
}
else
{
return 0;
}
}
void findtop()
{
printf("\n top position %d",top);
printf("\n top value %d",stack[top]);
}
void display()
{
int i,x;
x=top;
for(i=x;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
void main()
{
int ch,s;
while(1)
{
printf("\n 1.push \n 2. pop \n 3. findtop \n 4.display");
printf("\n enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("\n enter the data");
scanf("%d",&s);
push(s);
break;
}
case 2:
{
pop();
break;
}
case 3:
{
findtop();
break;
}
case 4:
{
display();
break;
}
default:
{
printf("wrong option");
break;
}
}
}
}
