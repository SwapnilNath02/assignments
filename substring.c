#include<stdio.h>
#include<string.h>
int main()
{
    char *p,*n,*s,*a,x;
    int l=0,i,j,k; 
    scanf("%s",&p);
    for(i=0;p[i+1]!='\0';i++)
    {
        for(j=i+2;p[j]!='\0';j++)
        {
            strcpy(n," ");
            memcpy(n,&p[i],j+1-i);
            n[j+1-i]='\0';
            strcpy(a,n);
            for(k=0;k<(j+1-i)/2;k++)
            {
                x=a[j-i-k];
                a[j-i-k]=a[k];
                a[k]=x;
            }
            if(strcmpi(a,n)==0)
            {
                if(strlen(a)>l)
                {
                    strcpy(s,a);
                    l=strlen(a);
                }
            }
            
        }
    }
    printf("\n%s",s);
    return 0;
}