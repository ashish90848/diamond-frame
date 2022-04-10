        #include<stdio.h>
        int main()
        {
        int i,j,n,l,m,k;
        printf("enter any number\n~");
        scanf("%d",&n);
        printf("\n");
        for(i=n; i>=1; i--)
        {
        for(j=1; j<=i;j++)
        {
        printf("*");
        }
        for(l=n-1;l>=i;l--)
        {
        printf(" ");
        }
        for(m=n;m>i;m--) 
        {
        printf(" ");
        }
        for(k=0;k<=i-1;k++)
        {
        printf("*");
        }
        printf("\n");
        }
        for(l=2; l<=n; ++l)
        {
        for(m=1; m<=l; ++m)
        {
        printf("*");
        }
        for(k=n-1;k>=l;k--) 
        {
        printf(" ");
        }
        for(j=n-1;j>=l;j--)
        {
        printf(" ");
        }
        for(i=0;i<=l-1;i++)
        {
        printf("*");
        }
        printf("\n");
        }
        return 0;
        }