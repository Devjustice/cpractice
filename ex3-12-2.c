#include<stdio.h>
int main(void){

char name[4];
char age[10];
char number[10];
char city[13];
char address[20];
char goodjob[20];
char badjob[20];
puts("이름나이도시주소잘하는것못하는것입력");
puts("이름입력");
scanf("%s",name);
puts("나이입력");
scanf("%s",age);
puts("전화번호입력");
scanf(" %s",number);
puts("거주도시입력");
scanf("%s",city);
puts("주소입력");
scanf("%s",address);
puts("특기입력");
scanf("%s",goodjob);
puts("약점입력");
scanf("%s",badjob);


printf("당신의 프로필입니다\n");
printf("%s\n",name);
printf("%s\n",age);
printf("%s\n",number);
printf("%s\n",city);
printf("%s\n",address);
printf("%s\n",goodjob);
printf("%s\n",badjob);


return 0;
}
