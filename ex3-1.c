#include<stdio.h>
int main(void){


int a,b,c;
double da;
char ch;

a=10;
b=a;c=a+20;da=3.5;ch='A';
printf("변수의 a의 값 :%d\n",a);
printf("변수의 b의 값 :%d\n",b);
printf("변수의 c의 값 :%d\n",c);
printf("변수의 da의 값:%.1lf\n",da);
printf("변수의 ch의 값:%c\n",ch);
printf("a+b+c+30=%d\n",a+b+c+30);
da =10.5;
ch = b;
printf("ch을 b로 초기화한것 %d\n",ch);
printf("da값을 10.5로 초기화한 후 /2한값 :%.1lf\n",da/2);

int g = 500;
printf("int g를 a로 나눈 값%d\n",g/a);

return 0;




}
