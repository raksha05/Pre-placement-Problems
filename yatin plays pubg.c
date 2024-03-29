#include<stdio.h>
#include<stdlib.h>
 
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *insert(struct node *head, int data){
	if(head==NULL){
		head=(struct node *)malloc(sizeof(struct node));
		head->left=NULL;
		head->right=NULL;
		head->data=data;
		return head;
	}
		if(data<head->data){
			head->left=insert(head->left, data);
		}
		else{
			head->right=insert(head->right, data);
		}
	return head;	
}
int count(struct node *head, int max){
	if(head==NULL)
		return max;
	int rd=count(head->right, max+1);
	int ld=count(head->left, max+1);
	int ans=rd>ld?(rd>max?rd:max):(ld>max?ld:max);
	return ans;
}
int main(){
	
	int t;
	
	scanf("%d", &t);
	
	while(t--){
		
		int n;
		scanf("%d", &n);
		struct node *head=NULL;
		
		int a[n];
		
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			head=insert(head, a[i]);
		}
		int ans= count(head, 0);
		printf("%d\n", ans);
	}
}
