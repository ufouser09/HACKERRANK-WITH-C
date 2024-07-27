//LÝNKLÝ LÝSTEDE N.ÝNDÝSTEKÝ ELEMANI SÝLME
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}NODE;

NODE *createNode();
void addRecord(NODE **head);
void printList(NODE *head);
void delete(NODE **head,int index);

int main(){
	NODE *head=NULL;
	int i=0;
	int j;
	int N;
	int index;
	
	while(i!=4){
		printf("\n1-Add\n2-print\n3-delete\n4-Exit");
		scanf("%d",&i);
		
		
		if(i==1){
			printf("kac tane sayi girmek istiyorsunuz\n");
			scanf("%d",&N);
			for(j=0;j<N;j++){
				addRecord(&head);
			}
			
		}
		if(i==2){
			printList(head);
		}
		if(i==3){
			printf("lutfen silinecek sayiyi giriniz\n");
			scanf("%d",&index);
			
			delete(&head,index);
			
		}
		
		
	}
}
NODE *createNode(){
	NODE *node;
	node=(NODE*)malloc(sizeof(NODE));
	
	printf("lutfen bilgileri giriniz\n");
	scanf("%d",&node->data);
	
	return node;
	
	
	
}

void addRecord(NODE **head){
	NODE *node=createNode();
	node->next=*head;
	*head=node;
	
	
	
}
void printList(NODE *head){
	NODE *tmp=head;
	while(tmp!=NULL){
		printf("%d\t",tmp->data);
		tmp=tmp->next;
	}
	
	
}

void delete(NODE **head,int index){
	int sayac=0;
	if(*head==NULL){
		printf("list is empty");
		return;
	}
	if((*head)->next==NULL){
		*head=NULL;
		free(head);
		return;
	}
	NODE *current=*head;
	NODE *prev=NULL;
	if(current->next!=NULL){
		prev=current;
		current=current->next;
		sayac++;
		
		if(sayac+1==index){
			
			prev->next=current->next;
		}
		
	}
	
	
	
	
	
	
	
	
	
}







