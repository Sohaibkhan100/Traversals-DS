#include<iostream>
using namespace std;
struct Node
{
char data;
Node *rightChild;
Node *leftChild;
};

void Preorder(Node *root)
{
if (root==NULL)
{
return;
}
cout<<root->data<< " ";
Preorder(root->leftChild);
Preorder(root->rightChild);
}
void Inorder(Node *root)
{
if (root == NULL)
{
return;
}
Inorder(root->leftChild);
cout<<root->data << " ";
Inorder(root->rightChild);
}
void Postorder(Node *root)
{
if (root==NULL)
{
return;
}
Postorder(root->leftChild);
Postorder(root->rightChild);
cout<<root->data<< " " ;
}
Node *Insert(Node *root,char data)
{
if(root==NULL)
{
root= new Node();
root->data=data;
root->leftChild=root->rightChild=NULL;
return root;
}
else if (data<=root->data)
{
root->leftChild=Insert(root->leftChild,data);
}
else
{
root->rightChild=Insert(root->rightChild,data);
}
return root;
}
int main()
{
Node *root=NULL;
char value;
int counter;
cout<<"enter number of elements = ";
cin>>counter;
for (int i = 0; i < counter; i++){
    cout<<"enter elements"<<" "<<(i+1)<<" = ";
    cin>>value;
    root = Insert(root,value);

}


cout<<"Pre-order: ";
Preorder(root);
cout<<endl;
cout<<"In-order: ";
Inorder(root);
cout<<endl;
cout<<"Post-order: ";
Postorder(root);
cout<<endl;
}
