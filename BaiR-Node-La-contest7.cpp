#include<iostream>
using namespace std;
struct TNode{
	int data;
	TNode *left,*right;
};

typedef TNode *Tree;
void Init(Tree &root)
{
	root=NULL;
}

TNode *createNode(int x)
{
	TNode *p=new TNode;
	if(!p)exit(1);
	p->data=x;
	p->left=p->right=NULL;
	return p;
}

void insertNode(Tree &root, int x)
{
	if(root)
	{
		if(root->data==x)return;
		else 
		{
			if(x<root->data)insertNode(root->left,x);
			else insertNode(root->right,x);
		}
	}
	else {
		TNode *p=createNode(x);
		root=p;
	}
}

void createTree(Tree &root)
{
	int n;
	cin>>n;
	int x;
	while(n--)
	{
		cin>>x;
		insertNode(root,x);
	}
}


void NLR(Tree root)
{
	if(root)
	{
		//cout<<root->data<<" ";
		NLR(root->left);
		NLR(root->right);
	}
}

void LeafNode(Tree t)
{
	if(t)
	{
		if(t->left==NULL && t->right == NULL)
		
		{
			cout<<t->data<<" ";
		}
		LeafNode(t->left);
		LeafNode(t->right);
	}
}

int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		Tree root;
	Init(root);
	createTree(root);
NLR(root);
LeafNode(root);
	cout<<endl;
	}
	
	return 0;
}
