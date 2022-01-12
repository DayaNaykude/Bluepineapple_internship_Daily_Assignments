//Write menu driven program in c for book management system

# include<stdio.h>
# include<stdlib.h>

void insertAtBeg();
void insertAtPos();
void insertAtEnd();
void deleteAtBeg();
void deleteAtPos();
void deleteAtEnd();
void displayBooks();


struct book{
	int bookId;
	char bookName[20];
	struct book *next;
};

struct book *head=NULL,*newBook,*temp;
int countBook;


int main(){
	
	
	int mainMenu;
	main_Menu:
	do 
	{
		printf("-----------------Main Menu-------------------\n");
		printf("\n1. Insert Book\n2. Delete Book\n3. Display All Books\n4. Search Book\n5. Quit\n");
		printf("Choose the Menu: ");
		scanf("%d",&mainMenu);
		
		switch(mainMenu){
			case 1:{
				int insertMenu;
				printf("--------------Insert Menu----------------");
				do{
					printf("\n1. At Begining\n2. At End\n3. At Position\n4. Goto Main Menu\n5. Quit\n");
					printf("Choose the Menu: ");
					scanf("%d",&insertMenu);
					printf("%d",insertMenu);
					switch(insertMenu){
						case 1:{
							insertAtBeg();
							break;
						}
						case 2:{
							insertAtEnd();
							break;
						}
						case 3:{
							insertAtPos();
							break;
						}
						case 4:{
							goto main_Menu;
							break;
						}
						case 5:{
							exit(0);
							break;
						}
						default:
  							  printf("Choose Appropriate Option\n");
					}
				}
				while(insertMenu!=5);
				break;
			}
			case 2:{
				int deleteMenu;
				printf("--------------Delete Menu----------------");
				do{
					printf("\n1. At Begining\n2. At End\n3. At Position\n4. Goto Main Menu\n5. Quit\n");
					printf("Choose the Menu: ");
					scanf("%d",&deleteMenu);
					printf("%d",deleteMenu);
					switch(deleteMenu){
						case 1:{
							deleteAtBeg();
							break;
						}
						case 2:{
							deleteAtEnd();
							break;
						}
						case 3:{
							deleteAtPos();
							break;
						}
						case 4:{
							goto main_Menu;
							break;
						}
						case 5:{
							exit(0);
							break;
						}
						default:
  							  printf("Choose Appropriate Option\n");
					}
				}
				while(deleteMenu!=5);
				break;
			}
			case 3:{
				displayBooks();
				break;
			}
			case 4:{
				//searchBook();
				break;
			}
		}
		
	}
	while(mainMenu!=5);
}

void insertAtBeg(){
	newBook=(struct book*)malloc(sizeof(struct book));
	
	printf("Enter the Book Id : ");
	scanf("%d",newBook->bookId);
	
	printf("Enter the Book Name : ");
	scanf("%s",newBook->bookName);
	
	newBook->next=NULL;
	
	countBook++;
	temp=head;
	
	if(head==NULL){
		head=newBook;
	}
	else{
		newBook->next=head;
		head=newBook;
	}
}
void insertAtEnd(){
	newBook=(struct book*)malloc(sizeof(struct book));
	
	printf("Enter the Book Id : ");
	scanf("%d",newBook->bookId);
	
	printf("Enter the Book Name : ");
	scanf("%s",newBook->bookName);
	
	newBook->next=NULL;
	
	countBook++;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newBook;
	
}
void insertAtPos(){
	int position;
	
	printf("Enter the Position: ");
	scanf("%d",position);
	printf("hi");
	if(position==1){
		printf("%d",position);
		insertAtBeg();
	}
	else if(position<1 || position>countBook){
		printf("Inavalid Position\n");
	}
	else{
		newBook=(struct book*)malloc(sizeof(struct book));
	
		printf("Enter the Book Id : ");
		scanf("%d",newBook->bookId);
		
		printf("Enter the Book Name : ");
		scanf("%s",newBook->bookName);
		
		newBook->next=NULL;
		
		int i=0;
		countBook++;
		temp=head;
		while(i<position-1){
			temp=temp->next;
			i++;
	}
	newBook->next=temp->next;
	temp->next=newBook;
	}
}

void deleteAtBeg(){
	if(head==NULL){
		printf("\nBook liabrary is empty\n");
		return;
	}
	else{
		temp=head;
		if(temp->next==NULL){
			head=NULL;
			printf("\nThe Removed Book is : %s",temp->bookName);
			free(temp);
			temp=NULL;
			countBook--;
		}
		else{
			head=head->next;
			printf("\nThe Removed Book is : %s",temp->bookName);
			free(temp);
			temp=NULL;
			countBook--;
		}
	}
}
void deleteAtEnd(){
	struct book *preBook;
	if(head==NULL){
		printf("\nBook liabrary is empty\n");
		return;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			preBook=temp;
			temp=temp->next;
		}
		if(head==temp){
			head=NULL;
			printf("\nThe Removed Book is : %s",temp->bookName);
			free(temp);
			temp=NULL;
			countBook--;
		}
		else{
			preBook->next=NULL;
			printf("\nThe Removed Book is : %s",temp->bookName);
			free(temp);
			temp=NULL;
			countBook--;
		}
	}
}
void deleteAtPos(){
	int position,i;
	struct book *prevBook;
	
	printf("Enter the Position: ");
	scanf("%d",position);
	
	if(position==1){
		deleteAtBeg();
	}
	else if(position<1 || position>countBook){
		printf("Inavalid Position\n");
	}
	else{
		temp=head;
		while(i<position){
			prevBook=temp;
			temp=temp->next;
			i++;
		}
		if(head==temp){
			head=NULL;
			printf("\nThe Removed Book is : %s",temp->bookName);
			free(temp);
			temp=NULL;
			countBook--;
		}
		else{
			prevBook->next=temp->next;
			printf("\nThe Removed Book is : %s",temp->bookName);
			free(temp);
			temp=NULL;
			countBook--;
		}

	}
}
void displayBooks(){
	struct book *temp;
	if(head==NULL){
		printf("\nNo book is present\n");
		return;
	}
	else{
		printf("\nBooks are : ");
		temp=head;
		while(temp!=NULL){
			printf("%s\t",temp->bookName);
			temp=temp->next;
		}
		printf("\n");
	}
}

