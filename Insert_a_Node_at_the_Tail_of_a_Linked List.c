//LÝNKLÝ LÝSTENÝN SONUNA ELEMAN EKLEME..
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}NODE;
void insertEnd(NODE **head,NODE **tail);
NODE* createNode();
void printList(NODE *head);

int main(){
	NODE *head=NULL;
	NODE *tail=NULL;
	int i=0;
	int N;
	int j;
	while(i!=3){
		
		printf("1-Add\n2-print\n3-Exit");
		scanf("%d",&i);
		
		
		if(i==1){
			printf("lutfen kac tane sayi giriceginizi giriniz\n");
			scanf("%d",&N);
			
			for(j=0;j<N;j++){
				insertEnd(&head,&tail);
			}
		}
		if(i==2){
			printList(head);
		}
	}
}
NODE* createNode(){
	NODE *node;
	node=(NODE*)malloc(sizeof(NODE));
	
	printf("bilgilerini giriniz\n");
	scanf("%d",&node->data);
	
	
	printf("eleman eklendi\n");
	
	return node;
	
	
	
	
	
}
void insertEnd(NODE **head,NODE **tail){
	
	NODE *node=createNode();
	
	if(*head==NULL){
		*head=node;
		*tail=node;
		(*head)->next=NULL;
		return;
	}	
	
	(*tail)->next=node;
	*tail=node;
	(*tail)->next=NULL;
	
	
	
}
void printList(NODE *head){
	NODE *tmp=head;
	while(tmp!=NULL){
		printf("%d",tmp->data);
		tmp=tmp->next;
	}
	
}





