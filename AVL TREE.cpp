#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct word
{
char k[15];
char m[20];
};
struct node
{
word data;
node *left, *right;
int ht;
};
class AVL
{
private:
node* AVLroot;
node* ins(node*,word);
node* rotl(node *);
node* rotr(node *);
node* rr(node*);
node* rl(node*);node* ll(node*);
node* lr(node*);


void ino (node*);
int ht(node*);
int bf(node*);

public:
AVL(){
    AVLroot=NULL;
}
void ins1(word x){
    AVLroot=ins(AVLroot,x)
}
void ino1(){
    ino(AVLroot);

}
void search(word x);
void in();
void menu();
void print();


};
node* AVL::ins(node* t,word x){
    if(t==NULL){
        t=new node;
        t->left=NULL;
        t->right=NULL;
        t->ht=1;
    }
    else if (strcmp(x.k,t->data.k)>0){
        t->right=ins(t->right,x);
        if(bf(t)==-2)
        if (strcmp(x.k,t->right->data.k)>0)
        t =rr(t);
        else
        t=rl(t);

    }
    else if (strcmp(x.k,t->data.k)<0){
        t->left=ins(t->left,x);
        if(bf(t)==2)
        if (strcmp(x.k,t->left->data.k)>0)
        t =ll(t);
        else
        t=lr(t);

}
t->ht =max(ht(t->left),ht(t->right))+1;
return(t);
}
int AVL:: ht(node *t){
    if(t==NULL)
    return 0;
    return t->ht;

node* AVL:: rotl(node *x){
    node *y;
    y=x->right;
    x->right=y->left;
    y->left=y;
    x ->ht=max(ht(x->left),ht(x->right))+1;
    y ->ht=max(ht(y->left),ht(y->right))+1;
    return(y);
}
node* AVL:: rotr(node *x){
    node *y;
    y=x->left;
    x->left=y->rigth;
    y->rigth=y;
    x ->ht=max(ht(x->left),ht(x->right))+1;
    y ->ht=max(ht(y->left),ht(y->right))+1;
    return(y);
}
node* AVL:: rr(node*t){
    t=rotr(t->right);
    return (t);
}
node* AVL:: ll(node*t){
    t=rotl(t->left);
    return (t);

}
node*  AVL:: rl(node*t){
     t->right=rotr(t->right);
    t=rotl(t->left);
    return(t) ;

}
node*  AVL::ll(node*t){
     t->left=rotl(t->left);
    t=rotl(t->right);
    return (t);

}
node  AVL::search(word x){
    node *t=AVLroot;
    while (t!=NULL)
    {
  if (strcmp(x.k,t->data.k)==0){
    cout<<t->data.m<<endl;
    return;
  }  if (strcmp(x.k,t->data.k)>0){
  t=t->right;}
  else{
    t=t->left;
  }

    }cout<<"keyt not found;"
    
}
void *AVl ::print(){
    ino(AVLroot);
} void *AVL ::menu(){
    int ch
    do{
        cout<<"1.inorder,search,exit";
        cin>>ch
        switch (ch)
        {
        case 1:
            ino1();
            
            break;
        case 2:
            word w;
            cout<<"enter";
            cin>>w.k;
            w.search(w.k)
            
            break;
         case 3:
            
            break;
        
    
        }while(ch!=4);
    }
}
void *AVl::input(){
    word w;
    int o;
    cout<<":entewr data";
    for(i=0;i<0;i++){
    cin>>w.k>>w.m;
    insert(w);
}
}int main(){
    AVL a;
    a.input();
a.menu();
return 0;
}