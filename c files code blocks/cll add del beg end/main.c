#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *create_list(){
	struct node *start,*ptr,*new_node;
	int data,choice;
	//creating the first node based on user decision
	printf("\nEnter 1 to input new data or enter 0 to stop:");	//taking user decision
	scanf("%d",&choice);
	if(choice!=0){
		start=(struct node*)malloc(sizeof(struct node));
		if(start==NULL)
			printf("\nOverflow!!Memory could not be alloted");
		else{
			printf("\nEnter node data:");
			scanf("%d",&data);
			start->data=data;
			start->next=start;
		}
	}
	//taking input the rest nodes based on user decision
	printf("\nEnter 1 to input new data or enter 0 to stop:");	//taking user decision
	scanf("%d",&choice);
	ptr=start;
	while(choice!=0){
		new_node=(struct node*)malloc(sizeof(struct node));			//creating the new node
		if(new_node==NULL)
			printf("\nOverflow!!Could not allote memory");
		else{
			//taking input data
			printf("\nEnter node data:");
			scanf("%d",&data);
			//linking the new node to the start
			new_node->data=data;
			new_node->next=start;
			//linking this node to the previous node
			ptr->next=new_node;
			ptr=ptr->next;
		}
		printf("\nEnter 1 to input new data or enter 0 to stop:");	//taking user decision
		scanf("%d",&choice);
	}
	return start;
}

int *display(struct node *start){
	struct node *ptr;
	//dsiplaying the list
	ptr=start;
	if(start==NULL)
		printf("\nList is empty");
	else{
		printf("\nThe current list is:");
		do{
			printf("%d  ",ptr->data);
			ptr=ptr->next;
		}while(ptr!=start);
	}
	return 0;
}

struct node *insert_begin(struct node *start){
	struct node *ptr,*new_node;
	int data;
	//taking input the new node data to be inserted at the beginning
	printf("\nEnter the new node data to be inserted at the beginning:");
	scanf("%d",&data);
	//inserting at the beginning
	new_node=(struct node*)malloc(sizeof(struct node));		//creating the new node to be inserted
	if(new_node==NULL)
		printf("\nOverflow!!Could not allote memory");
	else{
		new_node->data=data;	//putting the data in the data part of new node
		new_node->next=start;  //linking the new node to the start node
		ptr=start;
		while(ptr->next!=start)
			ptr=ptr->next;     //taking the ptr pointer to the last node
		start=new_node;        //making the new node as the start node
		ptr->next=start;       //linking the last node to the start node(which is the new node now)
	}
	return start;
}

struct node *insert_end(struct node *start){
	struct node *ptr,*new_node;
	int data;
	//taking input the new node data to be inserted at the end
	printf("\nEnter the new node data to be inserted at the end:");
	scanf("%d",&data);
	//inserting at the end
	new_node=(struct node*)malloc(sizeof(struct node));		//creating the new node to be inserted
	if(new_node==NULL)
		printf("\nOverflow!!Could not allote memory");
	else{
		new_node->data=data;	//putting the data in the data part of new node
		ptr=start;
		while(ptr->next!=start)
			ptr=ptr->next;     //taking the ptr pointer to the last node
		new_node->next=start;  //linking the new node to the start
		ptr->next=new_node;    //making the new node as the last node(by linking with second last node)
	}
	return start;
}

struct node *insert_before(struct node *start){
	struct node *ptr,*pre_ptr,*new_node;
	int data,index_val;
	//taking input the new node data to be inserted
	printf("\nEnter the new node data to be inserted:");
	scanf("%d",&data);
	//taking input the node data before which the new node has to be enetered
	printf("\nEnter the element before which the new element has to be inserted:");
	scanf("%d",&index_val);
	//inserting before the desired element
	new_node=(struct node*)malloc(sizeof(struct node));		//creating the new node to be inserted
	if(new_node==NULL)
		printf("\nOverflow!!Could not allote memory");
	else{
		new_node->data=data;		//putting the data in the data part of new node
		ptr=start;
		pre_ptr=ptr;
		while(ptr->data!=index_val)	//after this loop the ptr pointer will be on the index_val node and pre_ptr pointer will be on the just previous node
		{
			pre_ptr=ptr;
			ptr=ptr->next;
		}
		new_node->next=ptr;			//linking the new node to the list
		pre_ptr->next=new_node;		//linking the new node with the previous node(to complete the list)
	}
	return start;
}

struct node *insert_after(struct node *start){
	struct node *ptr,*pre_ptr,*new_node;
	int data,index_val;
	//taking input the new node data to be inserted
	printf("\nEnter the new node data to be inserted:");
	scanf("%d",&data);
	//taking input the node data after which the new node has to be enetered
	printf("\nEnter the element after which the new element has to be inserted:");
	scanf("%d",&index_val);
	//inserting after the desired element
	new_node=(struct node*)malloc(sizeof(struct node));		//creating the new node to be inserted
	if(new_node==NULL)
		printf("\nOverflow!!Could not allote memory");
	else{
		new_node->data=data;	//putting the data in the data part of new node
		ptr=start;
		pre_ptr=ptr;
		while(pre_ptr->data!=index_val)		//after this loop the pre_ptr pointer will be on the index_val node and ptr pointer will be on the just next node
		{
			pre_ptr=ptr;
			ptr=ptr->next;
		}
		new_node->next=ptr;			//linking the new node to the list
		pre_ptr->next=new_node;		//linking the new node with the previous node(to complete the list)
	}
	return start;
}

struct node *delete_begin(struct node *start){
	struct node *ptr,*ptr1;
	//deleting at the beginnning
	ptr=start;
	while(ptr->next!=start)		//taking the ptr pointer to the last node
		ptr=ptr->next;
	ptr1=ptr->next;			//assigning ptr1 pointer to the start node to later free(delete) it
	ptr->next=start->next;	//linking the last node to the second node
	free(ptr1);		//deleting the first node
	start=ptr->next;		//making the second node as the start node
	return start;
}

struct node *delete_end(struct node *start){
	struct node *ptr,*pre_ptr;
	//deleting at the end
	ptr=start;
	pre_ptr=ptr;
	while(ptr->next!=start)		//taking the ptr pointer to the last node and pre_ptr pointer to the second last node
	{
		pre_ptr=ptr;
		ptr=ptr->next;
	}
	pre_ptr->next=start;	//linking the second last node to the first node
	free(ptr);		//deleting the last node
	return start;
}

struct node *delete_before(struct node *start){
	struct node *ptr,*pre_ptr;
	int index_val;
	//taking input the node data before which the node has to be deleted
	printf("\nEnter the node data before which deletion to perform:");
	scanf("%d",&index_val);
	//deleting before the index_val node
	ptr=start;
	pre_ptr=ptr;
	while(ptr->next->data!=index_val)		//taking the ptr pointer to the previous node of index_val node and pre_ptr pointer to further its previous node
	{
		pre_ptr=ptr;
		ptr=ptr->next;
	}
	pre_ptr->next=ptr->next;	//linking the previous node to the index_val node
	free(ptr);		//deleting the desired node
	return start;
}

struct node *delete_after(struct node *start){
	struct node *ptr,*pre_ptr;
	int index_val;
	//taking input the node value after which the node has to be deleted
	printf("\nEnter the node value after which deletion to perform:");
	scanf("%d",&index_val);
	//deleting after the index_val node
	ptr=start;
	pre_ptr=ptr;
	while(pre_ptr->data!=index_val)		//taking the ptr pointer to the next node of index_val node and pre_ptr pointer to the index_val node
	{
		pre_ptr=ptr;
		ptr=ptr->next;
	}
	pre_ptr->next=ptr->next;	//linking the previous node to the next node of the desired node
	free(ptr);		//deleting the desired node
	return start;
}

void main()
{
	struct node *temp;
	int choice;
	//asking the user to give the command for an operation
	printf("-------MENU------");
	printf("\n1.Creating and displaying\n2.Insertion at the beginning\n3.Insertion at the end\n4.Deleting from the beginning\n5.Deleting from the end");
	printf("\nEnter choice:");
	scanf("%d",&choice);
	//performing operation according to user choice
	switch(choice){
		case 1:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			break;
		case 2:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the insert_begin function to insert at the beginning
			temp=insert_begin(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		case 3:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the insert_end function to insert at the end
			temp=insert_end(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		case 11:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the insert_before function to insert before an element
			temp=insert_before(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		case 12:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the insert_after function to insert after an element
			temp=insert_after(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		case 4:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the delete_begin function to delete from the beginning
			temp=delete_begin(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		case 5:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the delete_end function to delete from the end
			temp=delete_end(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		case 13:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the delete_before function to delete before an element
			temp=delete_before(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		case 14:
			//calling the create function to create the list
			temp=create_list();
			//calling the display function to display the created list
			display(temp);
			//calling the delete_after function to delete after an element
			temp=delete_after(temp);
			//calling the display function to display the final result
			display(temp);
			break;
		default:
			printf("\nEnter correct choice!!");
			break;
	}
}
