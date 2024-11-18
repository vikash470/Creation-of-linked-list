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

    int n,num,i;
    printf("enter the number of node:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter the number:");
    scanf("%d",&num);
    
    creat(num);
    }


display();
reverse();
printf("reverse list is:");
display();
}
void creat(int num){
    struct node *temp ,*ptr;
    temp=malloc(sizeof(struct node));
    temp->info=num;
    temp->link=NULL;
    if(start==NULL)
    start=temp;
    else{
        ptr=start;
        while(ptr->link!=NULL)
        ptr=ptr->link;
        ptr->link=temp;
    }
}
void display(){

    struct node *ptr;
    if (start=NULL)
    printf("empaty");
    else{
while(ptr!=NULL){
    printf("%d",ptr->info);


}

    }
}
void reverse(){
    struct node *p1,*p2,*p3;
    p1=start;
    p2=p1->link;
    p3=p2->link;
    p1->link=NULL;
    p2->link=p1;
    while(p3!=NULL){
        p1=p2;
        p2=p3;
        p3=p3->link;
        p2->link=p1;

    }
    start=p2;
}