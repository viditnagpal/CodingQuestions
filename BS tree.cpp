#include<iostream>
using namespace std;

struct node{
	node *l;
	node *r;
	int d;
};

node *insert(node *root, int it){
	node *p, *par;
	p=new node;
	p->d=it;
	p->l=NULL;
	p->r=NULL;	
	if(root==NULL){
		root=p;
	}
	else{
		par=root;
		while(par!=NULL){
		if(par->d>it){
			if(par->l==NULL){
				par->l=p;
				break;
			}
			par=par->l;
		}
		else{
			if(par->r==NULL){
				par->r=p;
				break;
			}
			par=par->r;
		}	
		}
	}
	return root;
}
int m;
void inorder(node *root){
	if(root==NULL){
		return;
	}
	inorder(root->l);
	cout<<root->d<<" ";
	inorder(root->r); 
}

int main(){
	node *root=NULL;
	int n,a;
	cout<<"no of nodes..? ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"node "<<i<<" : ";
		cin>>a;
		root=insert(root, a);
	}

	inorder(root);
	
}


