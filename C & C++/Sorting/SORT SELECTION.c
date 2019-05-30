#include <stdio.h>
void selection_sort();
int a[50], n;
main()
{
    int i;
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array:");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    selection_sort();
    printf("\n\nAfter sorting:");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
    getch();
}
void selection_sort()
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
