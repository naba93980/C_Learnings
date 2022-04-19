#include <stdio.h>
struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);

struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);

struct node *delete_node(struct node *);
struct node *delete_after(struct node *);

int main(int argc, char *argv[])
{
   int option;
   do
    {
       printf("\n\n 1: Create a list");
       printf("\n 2: Display the list");

       printf("\n 3: Add a node before a given node");
       printf("\n 4: Add a node after a given node");

       printf("\n 5: Delete a given node");
       printf("\n 6: Delete a node after a given node");

       printf("\n 7: EXIT");
       printf("\n\n Enter your option : ");
       scanf("%d", &option);
       switch(option)
        {
           case 1: start = create_ll(start);
           printf("\n LINKED LIST CREATED");
           break;
           case 2: start = display(start);
           break;

           break;
           case 3: start = insert_before(start);
           break;
           case 4: start = insert_after(start);
           break;
           case 0: start = delete_beg(start);
           break;

           break;
           case 5: start = delete_node(start);
           break;
           case 6: start = delete_after(start);
           break;

       }
   }

     while(option !=7);
     getch();
     return 0;
}
struct node *create_ll(struct node *start)
{
      struct node *new_node, *ptr;
     int num;
     printf("\n Enter -1 to end");
     printf("\n Enter the data : ");
     scanf("%d", &num);
     while(num!=-1)
     {
       new_node = (struct node*)malloc(sizeof(struct node));
       new_node -> data=num;
       if(start==NULL)
         {
           new_node -> next = NULL;
           start = new_node;
         }
       else
        {
           ptr=start;
           while(ptr->next!=NULL)
           ptr=ptr->next;
           ptr->next = new_node;
           new_node->next=NULL;
        }
        printf("\n Enter the data : ");
        scanf("%d", &num);
     }
   return start;
}

struct node *display(struct node *start)
 {
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
     {
        printf("\t %d", ptr -> data);
        ptr = ptr -> next;
     }
    return start;
 }




struct node *insert_before(struct node *start)
  {
     struct node *new_node, *ptr, *preptr;
     int num, val;
     printf("\n Enter the data : ");
     scanf("%d", &num);
     printf("\n Enter the value before which the data has to be inserted : ");
     scanf("%d", &val);
     new_node = (struct node *)malloc(sizeof(struct node));
     new_node -> data = num;
     ptr = start;
     while(ptr -> data != val)
      {
          preptr = ptr;
          ptr = ptr -> next;
      }
     preptr -> next = new_node;
     new_node -> next = ptr;
     return start;
  }

struct node *insert_after(struct node *start)
 {
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    printf("\n Enter the value after which the data has to be inserted : ");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr = start;
    preptr = ptr;
    while(preptr -> data != val)
     {
        preptr = ptr;
        ptr = ptr -> next;
     }
    preptr -> next=new_node;
    new_node -> next = ptr;
    return start;
  }

struct node *delete_beg(struct node *start)
  {
      struct node *ptr;
      ptr = start;
      start = start -> next;
      free(ptr);
      return start;
   }



struct node *delete_node(struct node *start)
  {
     struct node *ptr, *preptr;
     int val;
     printf("\n Enter the value of the node which has to be deleted : ");
     scanf("%d", &val);
     ptr = start;
     if(ptr -> data == val)
       {
          start = delete_beg(start);
          return start;
       }
     else
      {
         while(ptr -> data != val)
           {
              preptr = ptr;
              ptr = ptr -> next;
           }
          preptr -> next = ptr -> next;
          free(ptr);
          return start;
      }
  }

struct node *delete_after(struct node *start)
   {
        struct node *ptr, *preptr;
        int val;
        printf("\n Enter the value after which the node has to deleted : ");
        scanf("%d", &val);
        ptr = start;
        preptr = ptr;
        while(preptr -> data != val)
          {
            preptr = ptr;
            ptr = ptr -> next;
          }
        preptr -> next=ptr -> next;
        free(ptr);
        return start;
   }

