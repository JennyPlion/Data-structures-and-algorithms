#include<iostream>
using namespace std;
struct node{
	int data;
	node *left,*right;
};

typedef node *Tree;
void Init(Tree &root)
{
	root=NULL;
}

node *createNode(int x)
{
	node *p=new node;
	if(!p)exit(1);
	p->data=x;
	p->left = p->right = NULL;
	return p;
}

void insertNode(Tree &root, int x)
{
	if(root)
	{
		if(root->data == x)return;
		else{
			if(x<root->data)insertNode(root->left,x);
			else insertNode(root->right,x);
		}
	}
	else{
		node *p=createNode(x);
		root=p;
	}
}

void createTree(Tree &root)
{
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		insertNode(root,x);
	}
}

void Node_Trung_gian(Tree t, int &count)
{
	if(t)
	{
		if(t->left !=NULL && t->right !=NULL || t->left==NULL && t->right !=NULL || t->left !=NULL&& t->right ==NULL)
		{
			count++;
		}
		Node_Trung_gian(t->left,count);
		Node_Trung_gian(t->right,count);
	}
}

int main()
{
	Tree root;
	int k;
	cin>>k;
	while(k--)
	{
		int count=0;
		Init(root);
		createTree(root);
		Node_Trung_gian(root,count);
		cout<<count<<endl;
	}
}
