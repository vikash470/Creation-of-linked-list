


}
void insert(int a[],int num,int pos,int n){
int i;
for(i=n-1;i>pos-1;i--)
a[i+1]=a[i];
a[pos-1]=num;
n=n+1;
display(n,a);
}
void display(int n,int a[]){
int i;
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}