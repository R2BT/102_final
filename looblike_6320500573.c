#include<stdio.h>
int main()
{
    int n,i,max,j;
    scanf("%d",&n);
    int like[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&like[i]);
    }
    j=1;
    i=0;
    while(j<n)
    {
        if(like[i]>like[j])
        {
            max=i;
            j++;
        }

        else
        {
            max=j;
            i++;
            j++;
        }
    }
    printf("%d",max+1);
    return 0;
}
