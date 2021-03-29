#include<stdio.h>
int main()
{
    int n,i,max,j,sum=0;
    scanf("%d",&n);
    int like[n],comlike[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&like[i]);
    }
    j=1;
    i=0;
    while(j<n)
    {
        if(like[i]>=like[j])
        {
            max=like[i];
            j++;
        }
        else if(like[i]<=like[j])
        {
            max=like[j];
            i++;
            j++;
        }
    }
    i=0;
    while(i<n)
    {
        if(sum==2)
        {
            break;
        }
        else
        {
            if(max==like[i])
            {
                sum++;
            }
        }
        i++;
    }
    if(sum!=2)
    {
        for(i=0; i<n; i++)
        {
            if(max==like[i])
            {
                printf("%d",i+1);
            }
        }
    }
    else
    {
        printf("1");
    }

    return 0;
}
