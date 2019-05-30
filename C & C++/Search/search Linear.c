//Md. Ashik Shafayet
//Computer science & engineering (SUST)

#include<stdio.h>
int main()
{
    int a[100],i,m,n,s;
    while(1)
    {
        printf("How many number you want to chack=");
        scanf("%d",&n);
        printf("Enter your number=");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the number you want to search=");
        scanf("%d",&m);
        for(i=0;i<n;i++)
        {
            if(a[i]==m)
            printf("your scarch is complet in %d posation\n",i+1);
        }
    }
    return 0;
}
