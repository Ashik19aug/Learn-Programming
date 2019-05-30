//Md. Ashik Shafayet
//Computer science & engineering (SUST)

#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],start,middle,high,number,i,j,m,n,b;
    while(1)
    {
    printf("How many number you want to input=");
    scanf("%d",&n);
    printf("Enter your number=");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //for(i=0; i<n; i++)
    //{
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b;
                }
            }
        }
   // }
    printf("shorted number is=");
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nEnter the number to scarched=");
    scanf("%d",&number);
    start=1;
    high=n;
    do
    {
        middle=(start+high)/2;
        if(number<a[middle])
            high=middle-1;
        else if(number>a[middle])
            start=middle+1;
    }
    while(number!=a[middle]&&start<=high);
    if(number==a[middle])
        printf("the number is found in %d possion.\n\n\n\n",middle+1);
    else
        printf("scarch is failed.\n\n\n\n");
    }
}
