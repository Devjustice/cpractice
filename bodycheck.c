#include<stdio.h>
int main(void){

int lbp,hbp,bs,tri,hdf; //저혈압,고혈압,혈당,중성지방,고밀도지방
double BMI,height,weight;//키,몸무게
puts("최고혈압을입력하세요");
scanf("%d",&hbp);
puts("최저혈압을입력하세요");
scanf("%d",&lbp);
puts("혈당을입력하세요");
scanf("%d",&bs);
puts("중성지방을입력하세요");
scanf("%d",&tri);
puts("고밀도지방을입력하세요");
scanf("%d",&hdf);
puts("키를입력하세요");
scanf("%lf",&height);
puts("몸무게를입력하세요");
scanf("%lf",&weight);
BMI=weight/(height*height);







printf("최고혈압인덱스%d\n",hbp<130);//최고혈압 130 최저혈압 85이상
printf("최저혈압인덱스%d\n",lbp>85);
printf("혈당정상인덱스%d\n",bs>100);//혈당 100mg 이상
printf("고밀도지방인덱스%d\n",hdf>40);//고밀도지방 40mg이상
printf("중성지방인덱스%d\n",tri>150);//중성지방 150mg이상
printf("BMI인덱스%d\n",BMI>25);//bmi 25이상

puts("위중 3가지가 1이라면 당신은 대사증후군입니다);





return 0;}
