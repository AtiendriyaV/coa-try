#include<stdio.h>
#include<stdlib.h>

// creating a doubly linked list
struct node{
	int data;
	struct node* prev;
	struct node* next;
	
};


//	this function is for adding the element at the end of the ll
struct node* addAtEnd(struct node* head, int new,int length){
	int i=0;
	struct node* ptr = head;
//	going to the last node
	while(i<length-1){
		ptr=ptr->next;
		i++;
	}
////	creating a new node to add at last
	struct node* N5 = (struct node*)malloc(sizeof(struct node));
	N5->data=new;
	N5->next=NULL;
	N5->prev=ptr;
	ptr->next=N5;
////	to just check if I have linked properly, by showing the prev linked element
	ptr=ptr->next;
	printf("The new element added at the last is:\n");
	printf(" %d\n",ptr->data);
	ptr=ptr->prev;
	printf("To confirm this is added at the last, the data in previous node is:\n");
	printf(" %d\n",ptr->data);
	return head;
}

//	this is for adding the node at the beginning
struct node* addAtBegin(struct node* head, int new){
	struct node* N0 = (struct node*)malloc(sizeof(struct node));
	struct node* ptr = head;
	N0->data=new;
	ptr->prev=N0;
	N0->prev=NULL;
	N0->next=ptr;
	ptr=ptr->prev;
	printf("The newly entered node's data is:\n");
	printf(" %d\n",ptr->data);
	printf("The next element after this node is(to check if we have added correctly...):\n");
	printf(" %d\n",ptr->next->data);
	return head;
}

//	this is for traversing the whole ll
struct node* traverse(struct node* head,int length){
	int i=0;
	printf("Printing the nodes from both directions\n");
	struct node* ptr=head;
	printf("Printing from left to right\n");
	while(i<length-1){
	
		printf("%d ",ptr->data);
		ptr = ptr->next;
		i++;
	}
	printf(" %d",ptr->data);
	i=0;
	printf("\nPrinting from right to left\n");
	printf("%d ",ptr->data);
	while(i<3){
		
		ptr=ptr->prev;
		printf("%d ",ptr->data);
		i++;
	}
	printf("\n");
	
	return head;
}

//	this is for adding an node at a specific index
struct node* insertAtIndex(struct node* head, int new, int index){
	int i=0;
	struct node* N7 = (struct node*)malloc(sizeof(struct node));
	N7->data=new;
	struct node* ptr=head;
	while(i<index){
		ptr=ptr->next;
		i++;
		
	}
	ptr->next=N7;
	N7->prev=ptr;
	N7->next=ptr->next->next;
	ptr->prev->prev=N7;
	ptr=ptr->next;
	printf(" %d",ptr->data);
//	ptr=ptr->next;
//	N7->next=ptr->next->next;
	printf(" %d", ptr->data);
	return head;
}


int main(){
	struct node* N1 = (struct node*)malloc(sizeof(struct node));
	struct node* N2 = (struct node*)malloc(sizeof(struct node));
	struct node* N3 = (struct node*)malloc(sizeof(struct node));
	struct node* N4 = (struct node*)malloc(sizeof(struct node));
	N1->next=N2;
	printf("Nishanth C\n21BPS1160\nDSA LAB Doubly Linked List Assignment\n");
	printf("Lets enter data for 4 new consequtive linked lists\n");
	int data[10];
	printf("Enter data now\n");
	scanf("%d",&data[0]);
	scanf("%d",&data[1]);
	scanf("%d",&data[2]);
	scanf("%d",&data[3]);
	N1->data=data[0];
	N2->data=data[1];
	N3->data=data[2];
	N4->data=data[3];
	printf("Linking the nodes\n\n");
	N1->prev=NULL;
	N2->next=N3;
	N2->prev=N1;
	N3->next=N4;
	N3->prev=N2;
	N4->next=NULL;
	N4->prev=N3;
	printf("Linking successful\nNow traversing the ll\n");
	N1=traverse(N1,4);
	printf("\nNow lets insert an element at the end\n");
	printf("Entet the element:\n");
	scanf("%d",&data[5]);
//	printf("%d",N1->data);
	N1=addAtEnd(N1,data[5],4);
	printf("\nNow Lets insert an element at beginning:\n");
	scanf("%d",&data[6]);
	N1=addAtBegin(N1,data[6]);
	printf("\nNow lets insert the node at a specific index..\n");
	printf("Enter the element:\n");
	scanf("%d",&data[7]);
	printf("\nEnter the index:\n");
	scanf("%d",&data[8]);
	N1=insertAtIndex(N1,data[7],data[8]);
	return 0;
}

