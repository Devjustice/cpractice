#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
int ipt;
char name[][20] = {
"강진광", "고선주", "김경훈",
 "김규완", "김길환", "김다정", 
 "김주현", "김태완", "김현서", 
 "문선철", "박소희", "박예은", 
 "박종화", "서의영", "심민선", 
 "양승호", "오금성", "오유진",
  "오지구", "윤미정", "윤호영", 
  "이효동", "장진혁", "정의인",
  "조민권"};
  printf("1~25명의번호를 눌러이름을 호출한다\n\n");
 printf("1강진광2고선주3김경훈4김규완5김길환6김다정7김주현8김태완9김현서10문선철11박소희12박예은13박종화14서의영15심민선16양승호17오금성18오유진19오지구,20윤미정,21윤호영,22이효동,23장진혁,24정의인,25조민권\n");
 scanf("%d",&ipt);
 printf("%s\n",name[ipt-1]);

 printf("1차 초대명단 0누르면 2차 명단\n");
 for(int i=1;i<4;i++){
 	while(1){
	 scanf("%d",&ipt);
	 if(ipt==12){exit(1);}

	 for(int i=1;i<=ipt;i++)
	 {if(name[ipt-1]==name[i]){
	 ipt=ipt-1;
	 break;
	 }}

	 printf("결과%s\n",name[ipt-1]);
	  if (ipt==0)goto go1;
	  }}
	go1:
	 printf("2차 초대명단 0누르면 3차 명단\n");
 for(int i=1;i<4;i++){
 	while(1){
	 scanf("%d",&ipt);
	 if(ipt==12){exit(1);}
	 printf("결과%s\n",name[ipt-1]);
	  if (ipt==0)goto go2;
	  }}
	go2:   printf("3차 초대명단 0누르면 종료\n");
 for(int i=1;i<4;i++){
 	while(1){
	 scanf("%d",&ipt);
	 if(ipt==12){exit(1);}
	 printf("결과%s\n",name[ipt-1]);
	  if (ipt==0)exit(1);
	  }}
	 return 0;}









