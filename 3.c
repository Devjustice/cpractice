#include<stdio.h>
int main(void){
int a=10,b=20,c=20,res=0;
res=(a>b);
printf("a>bres=%d\n",res);
res=(a>=b);
printf("a>=bres=%d\n",res);
res=(a<b);
printf("a<bres=%d\n",res);
res=(a<=b);
printf("a<=bres=%d\n",res);
res=(a<=c);
printf("a<=cbres=%d\n",res);
res=(a==b);
printf("a==bres=%d\n",res);
res=(a!=b);
printf("a!=bres=%d\n",res);
return 0;}
