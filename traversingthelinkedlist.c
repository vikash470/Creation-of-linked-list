#include<stdio.h>
#include<stdlib.h>
void traverse(int num);
struct node{
    int info;
    struct node *link;

}*start=NULL;
int main(){
int num,n,i;
printf("enter the node:");
scanf("%d",n);
for(i=0;i<n;i++){
    printf("enter the number:");
    scanf("%d",&num);
}
}

void traverse(int num){
struct node *ptr,*temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=num;
temp->link=NULL;
if(start==NULL)
printf("Empaty");
else{
    ptr=start;
    while(ptr!=NULL){
        printf("%d->",ptr->info);
        ptr=ptr->link;
    }
}


}
