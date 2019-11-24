#include <stdio.h>
#include <stdlib.h>

int main()
{
    //searching an array element//
    int arr[]={0,1,2,1,1,1,3,4,5,6,7,8,9};
    int a=sizeof(arr);
    int b=sizeof(arr[1]);
    int s=a/b;
    int i,j;
    int search_array=0;
    printf("\n THE SIZE OF ARRAY IS %d",s);
    printf("\n ENTER THE ARRAY ELEMENT YOU WANT TO SEARCH IN THE ARRAY:");scanf("%d",&search_array);
    for(i=0;i<s;++i)
    {
        printf("\n %d",arr[i]);
    }
    for(j=0;j<s;j++)
    {


        if(arr[j]==search_array)
        {
            printf("\n \n ===============");
            printf("\n The searched array is %d at arr[%d]",arr[j],j);
        }
    }

}