
#include <stdio.h>
#include<stdlib.h>

struct Tnode{
    int data;
    struct Tnode * left;
    struct Tnode * right;
};
void insert(struct Tnode* root,int data){
    int ch;
    if(root==NULL){
            return;
        }
    printf("Left(1), Right(2)");
    scanf("%d",&ch);
    if(ch==1){
        if(root->left==NULL){
            root->left=(struct Tnode*)malloc(sizeof(struct Tnode));
            root->left->data=data;
            root->left->left=NULL;
            root->left->right=NULL;
        }
        else{
            insert(root->left,data);
        }
    }
    else{
        if(root->right==NULL){
            root->right=(struct Tnode*)malloc(sizeof(struct Tnode));
            root->right->data=data;
            root->right->left=NULL;
            root->right->right=NULL;
        }
        else{
            insert(root->right,data);
        }
    }
}

void inorder(struct Tnode* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

int main() {
    int val;
    struct Tnode* root;
    root=(struct Tnode*)malloc(sizeof(struct Tnode));
    root->left=NULL;
    root->right=NULL;
    printf("Insert data: ");
    scanf("%d",&val);
    insert(root,val);
    inorder(root);
    return 0;
}
