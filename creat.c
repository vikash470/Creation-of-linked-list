#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void creat(int num);
void display();
void reverse();
struct node{
int info;
struct node *link;

}*start=NULL;
void main(){
int i, n,num;
printf("Enter the number of node:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the %d number:",i+1);
    scanf("%d",&num);
    creat(num);
}
display();
reverse();
display();
}
void creat(int num){

struct node *ptr,*temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=num;
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
    ptr=start;
    while(ptr->link!=NULL)
    ptr=ptr->link;
    ptr->link=temp;
}

}
void reverse(){
struct node *p1,*p2,*p3;
if(start==NULL|| start->link==NULL){
return;
}
p1=start;
p2=p1->link;
p3=NULL;
while(p2!=NULL){

    p3=p2->link;
    p2->link=p1;
    p1=p2;
    p2=p3;
}
start->link=NULL;
start=p1;
void display();



}
void display()
{
struct node *ptr;
if(start==NULL)
printf("Empty");
else{
    ptr=start;
    while(ptr!=NULL){
        printf("%d->",ptr->info);
        ptr=ptr->link;
        
    }
    printf("NULL\n");
}


}