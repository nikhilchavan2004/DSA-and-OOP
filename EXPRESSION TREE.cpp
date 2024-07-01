#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct node{
	char data;
	node *left;
	node *right;
};
class t{
	public:
	node*top;
	char pf[30];
	void exp(char[]);
	void dis(node*);
	void dele(node*);
	void pt(node*);

};

class st{
	public:
	 node*data[30];
	 int top;
	 st(){
		top=-1;
	 }
	 int emp(){
		if(top==-1){
			return 1;
		}
		else{
			return 0;
		}
	 }void push(node*p){
		data[++top]=p;
	 }
	node* pop(){
		return(data[top--]);
	}

};
void t:: exp(char pf[30]){
	char c;
	st s;
	node*t1,*t2;
	int l,i;
	l=strlen(pf);
	for(i=l-1;i>=0;i--){
		 node*top=new node;
		top->left=NULL;
		top->right=NULL;
	
	if(isalpha(pf[i])){
		top->data =pf[i];
		s.push(top);
	
	}
	else if(pf[i]=='+'||pf[i]=='-'||pf[i]=='*'||pf[i]=='/'){
		t1=s.pop();
			t2=s.pop();
			top->data=pf[i];
			top->right=t1;
			top->left=t2;
            s.push(top);

	}
	}top=s.pop();
}
void t::dis(node*root){
	if(root!=NULL){
		cout<<root->data;
		dis(root->left);
		
		dis(root->right);
	}
}
void t::pt(node*top){
	st s1,s2;
	node* z=top;
	s1.push(z);
	while(!s1.emp()){
z=s1.pop();
s2.push(z);
if(z->left!=NULL)
s1.push(z->left);
if(z->left!=NULL)
s1.push(z->right);

	}
	while(!s2.emp())
	{
		top=s2.pop();
        cout<<top->data;
	}
}
void t::dele(node *n){
	if (n==NULL){
	
		dele(n->left);
	dele(n->right);
	cout<<n->data;
	free(n);
	}
}
int main(){
	t o;
	int h;
	char ex[20];
	cout<<"enter hte expn"<<endl;
	cin>>ex;
	cout<<ex;
	o.exp(ex);
	cout<<"preodrder exp"<<endl;
	
	cout<<"post";
	o.pt(o.top);
	cout<<"del";
	cin>>h;
	if(h==1){
	o.dele(o.top);
	}
	
	return 0;
}