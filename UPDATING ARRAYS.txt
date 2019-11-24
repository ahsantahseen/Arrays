int main()
{
    //updating content in array//
    int arr[]={0,1,2,3,4,5};
    int a=sizeof(arr);
    int b=sizeof(arr[1]);
    int s=a/b;
    int i,j,k;
    int element=0,pos=0;
    printf("\n ====ARRAY LIST====");
    for(i=0;i<s;++i)
    {

        printf("\n %d",arr[i]);
    }
    printf("\n ENTER ARRAY ELEMENT:");scanf("%d",&element);
    printf("\n ENTER ARRAY POSITION:");scanf("%d",&pos);
    for(j=0;j<s;++j)
    {
        if(j==pos)
        {
            arr[j]=element;
        }
    }
    printf("\n ==== UPDATED ARRAY LIST====");
    for(k=0;k<s;++k)
    {
        printf("\n %d",arr[k]);
    }
}
