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
	p->data =x;
	p->left = p->right = NULL;
	return p;
}

void insertNode(Tree &root, int x)
{
	if(root)
	{
		if(x == root->data)return;
		else 
		{
			if(x< root->data)insertNode(root->left,x);
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

void NLR(Tree root, int &count)
{
	if(root)
	{
		count++;
		NLR(root->left,count);
		NLR(root->right,count);
	}
}

int Sum(Tree root)
{
	if(root==NULL)return 0;
	else return (Sum(root->left)+Sum(root->right)+root->data);
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
		NLR(root,count);
		Sum(root);
		cout<<(1. *Sum(root)/count)<<endl;
	}
}
