#include<stdio.h>
#include<stdlib.h>
void creat(int num);
struct node{
    int info;
    struct node *link;
}*start=NULL;
void creat(int num){
struct node *Temp,*ptr;
Temp=(struct node *)malloc(sizeof(struct node));
Temp->info=num;
Temp->link=NULL;
if(start=Temp)
start=Temp;
else{
ptr=start;
while(ptr->link!=0)
ptr=ptr->link;
ptr->link=Temp;
}
}



