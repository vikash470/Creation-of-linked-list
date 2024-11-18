#include<stdio.h>
void insert(int a[],int num,int pos,int n);
void display(int n,int a[]);
void main()
{
    int a[20],n,num,pos,i;
    printf("Enter the size of arry:");
    scanf("%d",&n);
    printf("Enter the element of arry:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the position:");
    scanf("%d",&pos);
    insert(a,num,pos,n);
    display(n,a);   


}
void insert(int a[],int num,int pos,int n){
int i;
for(i=n-1;i>pos-1;i--)
a[i+1]=a[i];
a[pos-1]=num;
n=n+1;

}
void display(int n,int a[]){
int i;
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}