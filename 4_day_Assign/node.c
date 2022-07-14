//Insert node in a given linked list.
//Write a function to find Mth-to-last node of a singly linked list. strcut node * find_mth_node_from_last(struct node *root, int)
#include<stdio.h>
#include<stdlib.h>

typedef struct student   // Created structure for our various data as per requriment
{
	int rollno;
	char name[20];
	float marks;
	struct student *next;
}SLL;

void add_begin(SLL **);
void add_end(SLL **);
void add_middle(SLL **);
void print_data(SLL *);
void find_node(SLL *,int);
int count(SLL *);
int main()
{

	SLL *hptr=0; // we created one head pointer for linked list 
	int op,pos;
	while(1)
	{
		printf("-------------------------\nEnter your Choice from belows option\n \n----------------------\n1) Add node at Beginning\n2) Add Node at middle\n3) Add node at End\n4) Print the Data\n5)Find the Node\n10) Exit\n"); // from user we get option where they want to insert the node
		printf("-----------------------\nYour option: ");
		scanf("%d",&op);

		switch(op) // by option we switch the operation
		{
			case 1: add_begin(&hptr);break;
			case 2: add_middle(&hptr);break;
			case 3: add_end(&hptr);break;
			case 4: print_data(hptr);break;
			case 5:	printf("Enter the position: ");
				scanf("%d",&pos);
				find_node(hptr,pos);break;

			case 10: exit(0);
			default :printf("Option is not available\n");

		} 


	}

}

//------------------Adding node at Beginning--------------

void add_begin(SLL **ptr)
{
	SLL *new;
	new=(SLL *)malloc(sizeof(SLL));/// created node 
	printf("Enter student Data\n \n-------------\n1)Roll number ,2)Name,3)Marks\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->marks);
	new->next=*ptr; // this put the node at beginning position by headpointer is asigning to new node address loction and  
	*ptr=new;// this one modify the our headpointer with new node address.

}
//---------------Adding node at Middle------------------
void add_middle(SLL **ptr)
{
	SLL *new,*last;

	new=(SLL *)malloc(sizeof(SLL));/// created node 
	printf("Enter student Data\n \n------------------\n1)Roll number ,2)Name,3)Marks\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->marks);

	if(*ptr==0 || (new->rollno < (*ptr)->rollno)) // checking the 1st node and if there is only one node it is compare with new
	{
		new->next=*ptr;// its asigning the headpointer address to new one
		*ptr=new;/// this one modify the headpointer

	}
	else
	{
		last=*ptr; // we start checking below condition from 1st node here headpointer address asigning to last pointer
		while((last->next!=0)&&(new->rollno >last->next->rollno)) // this is check the node roll no and last node condition
			last=last->next;// it updte until last node is not getting and above condition is not satisfied.
		new->next=last->next;// it update the new node with last node address which we getting from above condition
		last->next=new;///and it is update last node address location so our new node is update in middle of node


	}

}

//------Adding node at End-----
void add_end(SLL **ptr)
{
	SLL *new,*last;
	new=(SLL *)malloc(sizeof(SLL));/// created node 

	printf("Enter student Data\n\n-----------------\n1)Roll number ,2)Name,3)Marks\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->marks);
	new->next=0;// we stored last node always zero so we asigning here zero
	if(*ptr==0)
		*ptr=new;//if it is 1st one then its add at first 
	else
	{
		last= *ptr; //
		while(last->next)//this one for get last node and it is iterate until to last node
			last=last->next;// update last pointer
		last->next=new;// update last node and new is add at end
	}
}



//------Printing Record-------
void print_data(SLL *ptr)
{
	if(ptr ==0)
	{
		printf("No Record\n");
		return ;
	}

	printf("\n-----------------Student Data--------------------\n");
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	printf("-----------------------------------------------------\n");
}

int count(SLL *ptr)
{ 
	int c=0;
	if(ptr ==0)
	{

		return 0;
	}

	while(ptr)
	{
		ptr=ptr->next;
		c++;
	}
	return c;
}



//-----------------find the node-----------------
void find_node(SLL *ptr,int pos)
{
	SLL *last,*prev;
		int a,i;
	a=count(ptr);

	last= ptr;
	if(pos>=1&&pos<=a)
	{	
			
			
		for(i=1;i<=a;i++)// iterate until the node count
		{
			if(pos==i)//if position we get we print that data
			{
				printf("----------------\nposition %d node contain:",pos);
				printf("%d %s %f\n-------------\n",last->rollno,last->name,last->marks);

			}
			else 
				last=last->next;//update the last address 
		}

	}
		else	printf("Position is not with node range\n");
}








