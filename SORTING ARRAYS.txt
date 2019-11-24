int main()
{


int arr[]={5,44,31,2,1};
int i_max=0;
int i,j,k;
for(i=5;i>=0;i--)
{
    i_max=i;
    for(j=5;j>=0;j--)
    {
        if(arr[i_max]>arr[j]) (for descending "arr[i_max]<arr[j]")
        {
            int temp=0;
            temp=arr[j];
            arr[j]=arr[i_max];
            arr[i_max]=temp;
        }
    }
}
for(k=0;k<5;k++)
{
    printf("\n %d",arr[k]);
}




}
