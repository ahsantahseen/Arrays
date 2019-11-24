int main()
{
    //deletion in array

int arr[]={0,1,2,3,4,5,6,7,8};
int a=sizeof(arr);
int b=sizeof(arr[1]);
int s=a/b;

int array_element=0,del_pos=0;
int i,j,k;
for(i=0;i<s;i++)
{
    printf("\n %d",arr[i]);
}
printf("\n ENTER ARRAY ELEMENT YOU WANT TO DELETE:");scanf("%d",&array_element);
printf("\n ENTER ARRAY POS YOU WANT TO DELETE:");scanf("%d",&del_pos);
for(j=del_pos-1;j<s;j++)
{
  arr[j]=arr[j+1];
}
s--;
for(k=0;k<s;k++)
{
 printf(" \n %d",arr[k]);
}

}
