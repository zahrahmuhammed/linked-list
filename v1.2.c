#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
	{
	int data;
 	struct node *next;
	};
struct node *head=NULL, *pos=NULL,*tail=NULL;
int ch,i=0, entry, b;
while(1)
{
printf("\n1)INSERT\n2)DISPLAY\n3)EXIT\n4)Count\n5)Search an Element");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	{
		printf("\n Enter the data:");
		scanf("%d",&entry);
		if(head==NULL)
		{
			head=(struct node*)malloc (sizeof(struct node));
			head->data=entry;
			pos=head;
			tail=head;
			i++;
		}
	else
		{
			tail->next=(struct node*) malloc(sizeof(struct node));
			tail=tail->next;
			tail->data=entry;
			i++;
		}
		break;
	}
			case 2:
		{
			pos=head;
			printf("\nTHE ELEMENTS ARE:");
			while(pos!=NULL)
			{
				printf("%d",pos->data);
				pos=pos->next;
			}	
		break;
		}
		
		case 3:
		{	
			printf("\ngoodbye");
			exit(0);
		}
		case 4:
		{
			printf("\n The count is :%d",i);
			break;
		}
		case 5:
		{
			printf("Enter the element to be searched");
			scanf("%d",&b);
			
				if(pos->data==b)

				{
					printf("the element is there in the list");
				}
				else 
				{
					printf("the element is not there in the list");
				}
		}
		}
			
		
			
}
}
