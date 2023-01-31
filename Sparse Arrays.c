include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2;
    scanf("%d ",&n1);
    char a[n1][1000];
    for(int i=0;i<n1;i++)
        gets(a[i]);
    scanf("%d ",&n2);
    char b[n2][1000];
    for(int i=0;i<n2;i++)
        gets(b[i]);
    for(int i=0;i<n2;i++)
    {
        int count=0;
        for(int j=0;j<n1;j++)
        {
            if(strcmp(b[i],a[j])==0)
                count++;
        }
        printf("%d\n",count);
    }
}
