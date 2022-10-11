1.
#include<stdio.h>
int max(int a[],int);
int main()
{
    int i,n,a[100];
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max(a,n);
    printf("greter numbers is %d ",max(a,n));
    return 0;
}
int max(int a[],int n)
{
    int i,max=-1;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
2,
#include<stdio.h>
int min(int a[],int);
int main()
{
    int i,n,a[100];
    printf("enter numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min(a,n);
    printf("smallest numbers is %d",min(a,n));
    return 0;
}
int min(int a[],int n)
{
    int i,min=999;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
3.
#include<stdio.h>
int fun(int a[])
{
    fun(a);
}
int main()
{
    int a[100],i,n,j,temp;
    printf("enter anumber");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    printf(" %d\t",a[i]);
}
       
4.
#include<stdio.h>
int main()
{
    int a[5]={3,8,2,9,10};
    int d=3,i,temp;
    while(d!=0)
    {
        temp=a[4];
        for(i=4;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        d--;
    }
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
}
5.
#include<stdio.h>
int main()
{
    int i,j,a[50],n,count=0;
    printf("enter numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   {
         for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                printf("print the duplicate array\n%d\t",a[i]);
            } 
        } 
    }
}                                                                                                
6
#include<stdio.h>
int main()
{
    int i,n,a[50];
    printf("enter the input:-");
    scanf("%d",&n);
    {
        printf("enter the element:-",i);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    }
    printf("\nmatrices");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n reverse of the matrices\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
}
7.
#include<stdio.h>
int main()
{
    int a[50],i,j,n,count=0;
    printf("enter numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the element:-",i);
        scanf("%d",&a[i]);
    }
    printf("\nprintf the number\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
    }
    printf("\ncount the duplicate numbers %d\n",count);
}
8.
#include<stdio.h>
int main()
{
    int i,j,n,a[50];
    int count=0;
    printf("enter the input");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        { 
            if(i!=j)
            {
                if(a[i]==a[j])
                count++;
            }
        }
         if(count==0)
         printf(" all unique number%d\t ",a[i]);
    }
}
9.
#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j,temp;
    printf("enter the 1st size array:-");
    scanf("%d",&n1);
    printf("secound array the size ");
    scanf("%d",&n2);
    n3=n1+n2;
    int a1[n1],a2[n2],a3[n3];
    for(i=0;i<n1;i++)
    {
        printf("1st element %d:-",i);
        scanf("%d",&a1[i]);
        a3[i]=a1[i];
    }
    int k=n1;
    for(i=0;i<n2;i++)
    {
        printf("2nd element %d:-",i);
        scanf("%d",&a2[i]);
        a3[k]=a2[i];
        k++;
    }
    printf("\nmerge the array ");
    for(i=0;i<n3;i++){
        printf("%d\t",a3[i]);
    }
    printf("\nsort the desending order");
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(a3[i]<a3[j])
            {
                temp=a3[i];
                a3[i]=a3[j];
                a3[j]=temp;
            }
        }

    }
    for(i=0;i<n3;i++)
    {
        printf("%d\t",a3[i]);
    }
}
10.
#include<stdio.h>
int main()
{
    int i,a[50],n;
    int freq[100]={0};
    printf("enter anumbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element:-");
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d %d\n",i,freq[i]);
        }
    }
}