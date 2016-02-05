#include<stdio.h>
int main()
{
  int a,b,sum,x,y,z;
  scanf("%d %d",&a,&b);
  sum=a+b;
  x=sum/1000000;
  y=(sum-1000000*x)/1000;
  z=(sum-1000000*x-1000*y);
  if(sum>999999)
    printf("%d,%03d,%03d",x,y,z);
  else if(sum<=999999&&sum>999)
    printf("%d,%03d",y,z);
  else if(sum>=0&&sum<=999)
    printf("%d",sum);
    else if(sum<-999999)
    printf("%d,%03d,%03d",x,-y,-z);
    else if(sum>=-999999&&sum<-999)
    printf("%d,%03d",y,-z);
    else if(sum>=-999&&sum<0)
    printf("%d",sum);
    return 0;
}