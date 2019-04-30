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
	p->data = x;
	p->left = p->right = NULL;
	return p;
}

void insertNode(Tree &root, int x)
{
	if(root)
	{
		if(root->data == x)return;
		else {
			if(x < root->data)insertNode(root->left,x);
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

void LNR(Tree root)
{
	if(root)
	{
		LNR(root->left);
		cout<<root->data<<" ";
		LNR(root->right);
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
		LNR(root);
		cout<<endl;
	}
}
