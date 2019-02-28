#include<stdio.h>
int main(void){

int a,b,sum,sub,mul,inv;
printf("쓰레기값출력\na=%d\nb=%d\nsum=%d\nmul=%d\nsub=%d\ninv=%d\n--------------",a,b,sum,mul,sub,inv);
a=10,b=20,sum=a+b,sub=a-b,mul=a*b,inv=-a;
printf("대입값출력\na=%d\nb=%d\nsum=%d\nmul=%d\nsub=%d\ninv=%d\n-----------",a,b,sum,mul,sub,inv);

printf("결과값출력\n a=%d\nb=%d\n",a,b);
printf("sum=%d\nsub=%d\nmul=%d\ninv=%d\n------------",sum,sub,mul,inv);
return 0;}
