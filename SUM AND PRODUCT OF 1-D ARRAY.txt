int main()
{
    int a[10];
    int i,j;
    int sum=0,product=1;
    for(i=0;i<10;i++)
    {
        printf("\n ENTER %d VALUE:",i);scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
        sum=sum+a[j];
        product=product*a[j];
    }
printf("\n %d is the sum",sum);
printf("\n %d is the product",product);

}