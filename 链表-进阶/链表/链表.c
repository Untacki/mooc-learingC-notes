//#include<node.h>
#include<stdio.h>
#include<stdlib.h>
//typedef struct _node{
//	  int value;
//	  struct _node *next;
//} Node;
//Node *add(Node *head,int number);
//int main(int argc,const char*argv[])
//{
//	Node *head=NULL;
//	int number;
//	do{
//		scanf("%d",&number);
//		if(number!=-1)
//		{
//			head=add(head,number);//��1
//		 // add(&head,number);//��2����ָ���ָ���ȥ 
//		}
//	}
//	while(number!=-1);
//	
//	
//	return 0;
//}
////��2 void add(Node** pHead,int number); //ֻ�轫headȫ��Ϊ*pHead 
//Node *add(Node *head,int number)//��1 
//{
////add new one to linked-list
//			Node *p=(Node *)malloc(sizeof(Node));
//			p->value=number;
//			p->next=NULL;
//			//find the last
//			Node *last=head;
//			if(last){
//			while(last->next)
//			{
//				last=last->next;
//			}
//			//attach
//			last->next=p;
//		            }
//		    else{head=p;
//			}
//	return head;
//}
// 
// 


//��3 
typedef struct _node{
	  int value;
	  struct _node *next;
} Node;

typedef struct _list{
	Node *head;
   //Node *tail;
} List; 

void add(List *plist,int number);//������������� 
void print(List *plist);//���� 
void delete(List *plsit,int number);//ɾ�������е�ĳ������ 
//void DELETE(List *plist);//�������� 
int main(int argc,const char*argv[])
{
	List list;
	list.head=NULL;
	
	int number;
	do{
		scanf("%d",&number);
		if(number!=-1)
		{
			add(&list,number);
		}
	}
	while(number!=-1);
	printf("������Ҫɾ��������:\n");
	scanf("%d",&number);
	delete(&list,number);
	
	
//    DELETE(&list);
	print(&list);

	return 0;
}

void add(List *plist,int number)
{
            //add new one to the linked-list
			Node *p=(Node *)malloc(sizeof(Node));
			p->value=number;
			p->next=NULL;
			//find the last
			Node *last=plist->head;
			if(last){
			while(last->next)
			{
				last=last->next;
			}
			//attach
			last->next=p;
		            }
		    else{plist->head=p;
			}
}
void print(List *plist)
{
	Node *p;
	for(p=plist->head;p;p=p->next)
	{
		printf("%d\t",p->value);
	}
	printf("\n");
}
void delete(List *plist,int number)
{
    int isFOUND=0;
	Node *p;
	Node *q;
	for(q=NULL,p=plist->head;p;q=p,p=p->next)
	{
		if(p->value==number)
		{
			if(q){
			q->next=p->next;
		        }
		    else{
		    plist->head=p->next;
			}
			free(p);	
			isFOUND=1;
			printf("�ҵ���,��ɾ��\n");
			break;
		}
	}
	if(!isFOUND){
	printf("���޴���\n");
                }
}
//void DELETE(List *plist)//�������� 
//{
//	Node *p;
//	Node *q;
//	for(p=plist->head;p;p=q)
//	{
//		q=p->next;
//		free(p);
//	}
//}

  
