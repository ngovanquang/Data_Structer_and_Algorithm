/*liet ke chinh hop*/
#include <stdio.h>
int n,count,k,p[20],b[20];
void nhap()
     {
          int i;
          printf("n=");  scanf("%d",&n);
          printf("k=");scanf("%d",&k);
          for(i=1;i<=n;i++) b[i]=1;
          count=0;
      }
void result()
     {
           int i;
      count+=1; printf("\n% d:",count);
           for(i=1;i<=k;i++)
                 printf("%d ",p[i]);
      }
void Try(int i)
      {
            int j;
            for(j=1;j<=n;j++)
            if(b[j])
               {
                      p[i]=j;
                      b[j]=0;
            if(i==k) result ();
          else Try(i+1);
                      b[j]=1;
                 }
      }
  int main()
      {
    nhap();
    Try(1);
      }