#include<stdio.h>
void insertion(int a[], int n);
int main(){
int n,i,a[50];
printf("enetr the size of arry");
scanf("%d",&n);
printf("enter the arry element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insertion(a,n);

return 0;
}
void insertion(int a[],int n){
int i,j,key;
for(j=1;j<=n-1;j++)
{
key=a[j];
for(i=j-1; i>=0 && key<a[i];i--)
    a[i+1]=a[i];
    a[i+1]=key;

}

printf("sorted array");
for(i=0;i<n;i++)
printf("%d",a[i]);









}