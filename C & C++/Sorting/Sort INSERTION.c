#include <stdio.h>
void insertion_sort();
int a[50],n;
main()
{
    int i;
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    insertion_sort();
    printf("\n\nAfter sorting:\n");
    for(i=0; i<n; i++)
        printf("\n%d", a[i]);
    getch();
}
void insertion_sort()
{
    int k,j,temp;
    for(j=0; j<n; j++)
    {
        temp=a[j];
        k=j-1;
        while(k>=0&&temp<a[k])
        {
            a[k+1]=a[k];
            k--;
        }
        a[k+1]=temp;
    }
}
