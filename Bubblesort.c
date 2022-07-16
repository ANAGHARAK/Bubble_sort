#include<stdio.h>
int main()
{
    int arr[5]={10,34,5,6,3};
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("%d\t",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }


    }
    printf("After sorting in ascending order, the array is\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",&arr[i]);
    }
    return 0;    
}