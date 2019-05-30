#include<stdio.h>
void quick_sort(int a[100],int fast,int last);
int partition(int a[100],int fast,int last);
int main()
{
    int a[100],i,n;
    while(1)
    {
        printf("How many number you want to input = ");
        scanf("%d",&n);
        printf("\n");
        printf("Enter your number = ");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        printf("\n");
        quick_sort(a,0,n-1);
        printf("After Quick sort = ");
        for(i=0; i<n; i++)
        printf("\t%d",a[i]);
        printf("\n\n\n\n");
    }
}

void quick_sort(int a[],int fast,int last)
{
    int x;
    if(fast<last)
    {
        x=partition(a,fast,last);
        quick_sort(a,fast,x-1);
        quick_sort(a,x+1,last);
    }
}

int partition(int a[],int fast,int last)
{
    int akib=fast,ashik;
    while(1)
    {
        while(a[akib]<=a[last]&&akib!=last)
            last--;
            if(akib==last)
                return akib;
            ashik=a[akib];
            a[akib]=a[last];
            a[last]=ashik;
            akib=last;

        while(a[akib]>=a[fast]&&akib!=fast)

            fast++;
            if(akib==fast)
                return akib;
            ashik=a[akib];
            a[akib]=a[fast];
            a[fast]=ashik;
            akib=fast;
    }
}
