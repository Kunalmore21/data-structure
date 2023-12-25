#include<stdio.h>

int main()
{
    int a[100],n,i;
    void selection(int a[100],int n)
    
    printf("enter limit");
    scanf("%d",&n);
    printf("array of n number");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    selection(a,n);
    {
        void selection(int a[100],int n)
        {
            {
                int j,index,min,t,i;
                for(i=0;i<n;i++)
            
            min=a[i];
            index=i;
            for(j=i;j<n;j++)
            {
                if(a[j]<min)
                {
                    min=a[j];
                    index=j;
                }
            }
            t=a[i];
            a[i]=a[index];
            a[index]=t;
        }
        printf("sorted no");
        for(i=0;i<n;i++)
        printf("%d",a[i]);
        
    
    }
            
        }
}
    
