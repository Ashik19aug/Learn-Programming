#include<stdio.h>
int a[100],n;
bubble_sort()
{
    int i,j,n,x;
    for(i=0; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
}
int main()
{
    int i,n;
    while(1)
    {
        printf("How many number you want to input=");
        scanf("%d",&n);
        printf("Enter your number=");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        bubble_sort();
        printf("After bubble sorting=");
        for(i=0; i<n; i++)
        printf(" %d",a[i]);
        printf("\n\n\n");
    }
}
