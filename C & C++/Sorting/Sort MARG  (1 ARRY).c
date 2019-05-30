#include<stdio.h>

void marg_sort(int [],int ,int ,int );
void partition(int [],int ,int );

int main()
{
    int a[50],i,n,last,mid,fast;
    printf("Size of arry = ");
    scanf("%d",&n);
    printf("Enter your arry = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    partition(a,0,n-1);
    printf("After marg sort = ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
    return 0;
}
void partition(int a[],int fast,int last)
{
    int mid;
    if(fast<last)
    {
        mid=(fast+last)/2;
        partition(a,fast,mid);
        partition(a,mid+1,last);
        marg_sort(a,fast,mid,last );
    }
}
void marg_sort(int a[],int fast,int mid,int last)
{
    int i,lo,k,temp[50],mi;
    i=fast;
    lo=fast;
    mi=mid+1;
    while((lo<=mid)&&(mi<=last))
    {
        if(a[lo]<=a[mi])
        {
            temp[i]=a[lo];
            lo++;
        }
        else
        {
            temp[i]=a[mi];
            mi++;
        }
        i++;
    }
    if(lo>mid)
    {
        for(k=mi; k<=last; k++)
        {
            temp[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=lo; k<=mid; k++)
        {
            temp[i]=a[k];
            i++;
        }
    }
    for(k=fast; k<=last; k++)
    {
        a[k]=temp[k];
    }
}
