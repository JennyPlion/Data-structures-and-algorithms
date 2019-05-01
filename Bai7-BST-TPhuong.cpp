#include<iostream>
using namespace std;
struct node{
	int data;
	node *left,*right;
	int height;
};

typedef node *Tree;
void Init(Tree &root)
{
	root=NULL;
}

node *createNode(int x)
{
	node *p= new node;
	if(!p)exit(1);
	p->data=x;
	p->left = p->right=NULL;
	p->height=1;
	return p;
}

int height(Tree root)
{
	if(root)return root->height;
	return 0;
}

void rightRolate(Tree &root)
{
	node *p;
	p=root->left;
	root->left = p->right;
	p->right = root;
	root->height=max(height(root->left),height(root->right))+1;
	p->height=max(height(p->left),height(p->right))+1;
	root=p;
}

void leftRolate(Tree &root)
{
	node *p;
	p=root->right;
	root->right = p->left;
	p->left=root;
	root->height=max(height(root->left),height(root->right))+1;
	p->height=max(height(p->left),height(p->right))+1;
	root=p;
}

int getBalance(Tree root)
{
	if(root)return height(root->left)-height(root->right);
	return 0;
}

void insertNode(Tree &root, int x)
{
	int bal;
	if(root==NULL)
	{
		root=createNode(x);
	}
	else
	{
		if(x<root->data)insertNode(root->left,x);
		else insertNode(root->right,x);
		root->height=max(height(root->left),height(root->right))+1;
		bal=getBalance(root);
		if(bal>1&&x<root->left->data)rightRolate(root);
		else if(bal<-1&&x>root->right->data)leftRolate(root);
		else if(bal>1&&x>root->left->data)
		{
			leftRolate(root->left);
			rightRolate(root);
		}
		else if(bal<-1&&x<root->right->data)
		{
			rightRolate(root->right);
			leftRolate(root);
		}
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

void NLR(Tree &root)
{
	if(root)
	{
		cout<<root->data<<" ";
		NLR(root->left);
		NLR(root->right);
	}
}

int main()
{
	Tree root;
	int k;
	cin>>k;
	while(k--)
	{
		Init(root);
		createTree(root);
		NLR(root);
		cout<<endl;
	}
}

