#include<stdio.h>
int main(void){

int a=5,b=5,pre=(++a)*3,post=(b++)*3;
printf("초기값A=%d,b=%d\n",a,b);
printf("전위형:(++A)*3=%d,후위형(b++)*3=%d\n",pre,post);




return 0;}
