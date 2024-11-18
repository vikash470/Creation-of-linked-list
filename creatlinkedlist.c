#include<stdio.h>
#include<malloc.h>
void creat(int num);
void display();
struct node{
    int info;
    struct node *link;
 
}*start=NULL;
void main(){
int num,i,n;
printf("enter the number of node:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the number");
    scanf("%d",&num);
    creat(num);

}
display();

}
void creat (int num){
struct node *temp,*ptr;
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
void display(){
struct node *ptr;
if(start==NULL)
printf("empty");
else{
    ptr=start;
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr=ptr->link;
    }
}

}




