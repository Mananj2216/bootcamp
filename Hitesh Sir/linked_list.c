#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define max 20
struct student
{
	int data;
	struct NODE *link;
};
typedef struct student NODE;

NODE *getNODE()
{
	NODE *p;
	p=(NODE *) malloc(sizeof(NODE));
	if(p == NULL)
	{
		printf("\n Memory not allocated!");
		exit(0);
	}
	return p;
}
NODE* insertFront(NODE *start,int data)
{
	NODE *newNODE;
	newNODE=getNODE();
	newNODE->data=data;
	newNODE->link=start;
	start=newNODE;
	return start;
}
NODE* removeFront(NODE *start)
{
	NODE *temp;
	if(start==NULL)
	{
		printf("..List is empty...");
		return start;
	}
	temp=start;
	start=start->link;
	printf("Data removed =%d",temp->data);
	free(temp);
	return start;
}
NODE* removeEnd(NODE *start)
{
	NODE *prev,*last;
	if(start==NULL)
	{
		printf("..List is empty..");
		return start;
	}
	last=prev=start;
	if(start->link==NULL)
	{
		printf("Element %d deleted successfully",start->data);
		return NULL;
	}
	while(last->link!=NULL)
	{
		prev=last;
		last=last->link;
	}
	prev->link=NULL;
	printf("Element %d deleted successfully",last->data);
	free(last);
	return start;
}
NODE* removeElement(NODE *start, int element)
{
	NODE *cur,*prev;
	int i;
	if(start == NULL)
	{
		printf("---Empty list. can't delete---");
		return start;
	}
	cur =start;
	if(start->data==element)
	{
		printf("\n**Item Deleted is %d **\n",start->data);
		start=start->link;
		free(cur);
		return start;
	}
	while(cur!=NULL)
	{
		if(cur->data==element)
		{
			prev->link=cur->link;
			printf("\n NODE with element: %d deleted successfully !..\n",cur->data);
			free(cur);
			return start;
		}
		prev=cur;
		cur=cur->link;
	}
	printf("\n\n **Element not found !! ..\n\n");
	return start;
}
void display(NODE *start)
{
	NODE *temp;
	if(start==NULL)
	{
		printf("\n --------List is empty_____\n\n");
		return;
	}
	temp=start;
	printf("\n Elements are:\n");
	printf("**************************\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
void main()
{
	int ch,data,pos,element;
	NODE *start = NULL;
	while(1)
	{
		printf("\n *****LINKED LIST*********\n");
		printf("\n1.Insert\n2.Delete at front\n3.Delete at end\n4.Delete a given point\n5.Display\n6.Exit");
		printf("\n Enter your choice \n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n Enter a data:");
			scanf("%d",&data);
			flushall();
			start=insertFront(start,data);
			break;
			case 2: printf("\n ** Deletion at Front ***\n");
			start=removeFront(start);
			break;
			case 3:printf("\n **Deletion at Front ***\n");
			start=removeEnd(start);
			break;
			case 4: printf("\n ** Delete a given element ***\n");
			printf("\nEnter an element to remove:");
			scanf("%d",&element);
			start=removeElement(start,element);
			break;
			case 5:display(start);
			break;
			default:exit(0);
		}
	}
}
