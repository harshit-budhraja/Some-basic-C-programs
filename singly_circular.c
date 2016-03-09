#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node;
struct Node *ptr,*head,*end,*temp;

void disp()
{
	if(head==NULL || end==NULL)
		printf("\n\t\t\tEMPTY LIST...\n");
	else
	{
		ptr=head;
		do
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}while(ptr!=head);
		printf("\n-are the elements in the list CURRENTLY...\n");
	}
}


void insert_beg()
{
	ptr=(struct Node *) malloc(sizeof(struct Node));
	printf("Enter the data:- ");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	
	if(head==NULL)
		head=end=ptr;
		
	else
	{
		ptr->next=head;
		head=ptr;
		
	}
	end->next=head;
	printf("\t\tELEMENT INSERTED AT THE BEGINNING SUCCESSFULLY.\n\n");
	disp();
	
}

void insert_end()
{
	ptr=(struct Node *) malloc(sizeof(struct Node));
	printf("Enter the data:- ");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	
	if(end==NULL)
		head=end=ptr;
		
	else
	{
		end->next=ptr;
		end=ptr;		
	}
	end->next=head;
	printf("\t\tELEMENT INSERTED AT THE ENDING SUCCESSFULLY.\n\n");
	disp();
	
}


/*
//In this function, 'temp' is used as a traversing pointer and 'ptr' as a working pointer.
void insert_mid()
{
	int val=0,status=0;
	Node *pos;
	ptr=(struct Node *) malloc(sizeof(struct Node));
	printf("Enter the data:- ");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	printf("Enter the value of the element after which you want to insert the requested element:- ");
	scanf("%d",&val);
	
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			pos=temp;
			status=1;
		}
		temp=temp->next;
	}
	if(status==0)	printf("\t\t\tInsertion unsuccessful as the element was not found.\n");
	else
	{
		ptr->next=pos->next;
		pos->next=ptr;
		printf("\t\tELEMENT INSERTED AFTER THE GIVEN VALUE SUCCESSFULLY.\n\n");
	}
	disp();
	
}

*/

void del_beg()
{	
	Node *ptr;
	if(head==NULL || end==NULL)
		printf("\n\t\t\tEMPTY LIST...\n");
	else
	{
		ptr=head;
		free(ptr);
		head=head->next;
		end->next=head;
		printf("\t\tELEMENT DELETED FROM BEGINNING SUCCESSFULLY.\n\n");
	}
	disp();
}

void del_end()
{	
	Node *ptr,*tmp=head;
	while(tmp->next!=end)
		tmp=tmp->next;
			
	if(head==NULL || end==NULL)
		printf("\n\t\t\tEMPTY LIST...\n");
	else
	{
		ptr=end;
		free(ptr);
		end=tmp;
		end->next=head;
		printf("\t\tELEMENT DELETED FROM ENDING SUCCESSFULLY.\n\n");
	}
	disp();
}


/*
//In this function, 'temp' is used as a traversing pointer and 'ptr' as a working pointer.
void del_mid()
{
	int val=0,status=0;
	Node *pos;
	printf("Enter the value of the element after which you want to request a delete:- ");
	scanf("%d",&val);
	
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			pos=temp;
			status=1;
		}
		temp=temp->next;
	}
	
	if(status==0)	printf("\t\t\tDeletion unsuccessful as the entered element was not found.\n");
	else
	{
		ptr=pos->next;
		temp=pos;
		pos->next=ptr->next;
		free(ptr);
		printf("\t\tELEMENT DELETED AFTER THE GIVEN VALUE SUCCESSFULLY.\n\n");
	}
	disp();
	
}

*/		


void main()
{
	insert_beg();
	insert_beg();
	insert_end();
	insert_end();
	//insert_mid();
	del_end();
	del_beg();
	//del_mid();
}
	
