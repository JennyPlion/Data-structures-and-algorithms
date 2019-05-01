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
	node *p= new node;
	if(!p)exit(1);
	p->data = x;
	p->left = p->right = NULL;
	return p;
}

void insertNode(Tree &root, int x)
{
	if(root)
	{
		if(root->data == x)return;
		else 
		{
			if(x < root->data)insertNode(root->left,x);
			else insertNode(root->right,x);
		}
	}
	else{
		node *p= createNode(x);
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

void LRN(Tree root)
{
	if(root)
	{
		LRN(root->left);
		LRN(root->right);
		//cout<<root->data<<" ";
	}
}

int Sum(Tree root)
{
	if(root==NULL)return 0;
	if(root->left == NULL && root->right == NULL)return root->data;
	else
	{
		return Sum(root->left)+Sum(root->right);
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
		LRN(root);
		cout<<Sum(root)<<endl;
	}
}
