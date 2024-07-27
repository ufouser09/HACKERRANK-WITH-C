//BÝR LÝNKED LÝSTÝ TERSTTEN YAZDIRAN FONKSÝYON...
//KOD ÇALIÞIYOR...
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node* next;
}NODE;


NODE *createNode();
void addRecord(NODE **head);
void printList(NODE *head);
void reverseList(NODE **head);

int main(){
	
	NODE *head=NULL;
	int i=0;
	int N;
	int j=0;
	
	while(i!=4){
		printf("1-Add\n2-reverse\n3-print\n4-exit");
		scanf("%d",&i);
	
	if(i==1){
	printf("lutfen kac adet node girmek istiyorsanýz giriniz\n");
	scanf("%d",&N);
	
	
	printf("elemanlar giriliyor\n");
	for(j=0;j<N;j++){
		addRecord(&head);
		
	}
	
}
	if(i==2){
		reverseList(&head);
	}
	if(i==3){
		printList(head);
	}
	
	}
	}
	
	


NODE *createNode(){
	NODE *node;
	node=(NODE*)malloc(sizeof(NODE));
	
	printf("lutfen bilgileri giriniz\n");
	scanf("%d",&node->data);
	
	
	printf("node olusturuldu\n");
	
	return node;
	
	
	}
	
void addRecord(NODE **head){
	NODE *node=createNode();
	
	if(*head==NULL){
		(*head)=node;
		(*head)->next=NULL;
		
		printf("eleman eklendi11\n");
		return;
	}
	NODE *tmp=*head;
	
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	tmp->next=node;
	node->next=NULL;
	
	
	
	printf("node eklendi22\n");
	}
void printList(NODE *head){
	NODE *tmp=head;
	
	while(tmp!=NULL){
		printf("%d\t",tmp->data);
		tmp=tmp->next;
		
	}
	printf("\nlistemiz yazdýrýldý\n");
}
void reverseList(NODE **head){
	
	
	NODE *current=*head;
	NODE *prev=NULL;
	NODE *next=NULL;
	
	while(current!=NULL){
		next=current->next;
		
		current->next=prev;
		prev=current;
		current=next;
	}
	*head = prev;
}


