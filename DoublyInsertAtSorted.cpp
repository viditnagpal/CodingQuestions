//insert at begining

#include<iostream>
using namespace std;

struct Dnode{
		Dnode *b;
		int data;
		Dnode *f;
	}*head, *tail;

void insert(int item){
		Dnode *t;
		t=new Dnode;
		t->data = item;	
		if(head==NULL){
			t->f = NULL;
			t->b = NULL;
			head = tail = t;
		}
		else{
			t->b = NULL;
		
			t->f = head;
			head->b=t;
			head = t;
		}
}

void traverse(){

	Dnode *t;
	t=tail;
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->b;
	}
}

void insertAtSorted(int item){
	Dnode *n,*p;
	p=head;
	while(p!=NULL){
		p=p->f;	
		if(p->data>item){	
			break;
		}
		
	}
	
	//cout<<p->data<<"m";
	/*if(p==NULL){
		insert at begining
	}
	if(p==tail){
		insert at end
	}
	*/
	
	//cout<<p->data;
	
	n=new Dnode;
	
	n->data=item;
	n->f=p;
	n->b=p->b;
	(p->b)->f=n;
	p->b=n;
	
	traverse();
	
}

int main(){
	
	head=tail=NULL;
	char c;
	int item,it;
	cin>>c;
	while(c=='y'){
		cin>>item;
		insert(item);
		cin>>c;
	}
	cout<<"Enter item to insertAtSorted  ";
	cin>>it;
	
	insertAtSorted(it);
	
	return 0;
}


