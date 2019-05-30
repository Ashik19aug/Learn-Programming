#include<stdio.h>
void marge_sort();
int a[100],b[100],c[100],m,n;
int main()
{
    int i,j,k;
    while(1)
    {
        printf("How many number you want to use in 1st array = ");
        scanf("%d",&n);
        printf("Enter 1st array sorted number = ");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        printf("How many number you want to use in 2nd array = ");
        scanf("%d",&m);
        printf("Enter 2nd array sorted number = ");
        for(j=0; j<m; j++)
        scanf("%d",&b[j]);
        marge_sort();
        printf("After marge sorting=");
        for(i=0; i<n+m; i++)
        printf(" %d",c[i]);
        printf("\n\n\n");
    }
}
void marge_sort()
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(i>=n)
        while(j<m)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    if(j>=m)
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
}
