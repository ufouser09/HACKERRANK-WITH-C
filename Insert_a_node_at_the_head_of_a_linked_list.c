//LÝNKED LÝST'ÝN BASINA ELEMAN EKLEME

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}NODE;
NODE *createNode();
void addRecord(NODE **head);
void printList(NODE *head);
int main(){
	NODE *head=NULL;
	int N;
	int i=0;
	int j=0;
	
	while(i!=3){
		printf("1-Add\n2-print\n3-Exit\n");
		scanf("%d",&i);
		
		if(i==1){
			printf("lutfen kac tane sayi girmek istediginiz giriniz\n");
			scanf("%d",&N);
			
			for(j=0;j<N;j++){
				addRecord(&head);
			}
		}
		if(i==2){
			printList(head);
		}
		
		
	}
	
}

NODE *createNode(){
	NODE *node;
	node=(NODE*)malloc(sizeof(NODE));
	
	printf("lutfen bilgilerini giriniz\n");
	scanf("%d",&node->data);
	
	printf("node olusturuldu\n");
	
	
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
		printf("%d",tmp->data);
		tmp=tmp->next;
	}
	
}

