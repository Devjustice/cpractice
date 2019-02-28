#include<stdio.h>
#include<limits.h>
int main(void){
int i1=61,i2=62,i3=63,i4=64,i5=65;
i1=i2;
printf("현재 %d는  i1 값입니다\n",i1);
i1=i3;
printf("현재 %d는  i1 값입니다\n",i1);
i1=i4;
printf("현재 %d는  i1 값입니다\n",i1);
i1=i5;
printf("현재 %d는  i1 값입니다\n",i1);
printf("A의 아스키코드 값은%d입니다",i1);

char ch1 = i1;

printf("현재 %c는  i1의 아스키코드문자 입니다\n",i1);


printf("현재 %d는  i1 값입니다\n",i1);
		
printf("사인드케릭터형의 최솟값 = %d\n", SCHAR_MIN);
printf("사인드케릭터형의 최댓값 = %d\n", SCHAR_MAX);
printf("언사인드케릭터형의 최댓값 = %d\n", UCHAR_MAX);
printf("쇼트인트형의 최솟값 = %d\n", SHRT_MIN);
printf("쇼트인트형의 최댓값 = %d\n", SHRT_MAX); 
printf("인트형의 최솟값 = %d\n", INT_MIN);
printf("인트형의 최댓값 = %d\n", INT_MAX);
printf("캐릭터형의 최솟값 = %d\n", CHAR_MIN);
printf("캐릭터형의 최댓값 = %d\n", CHAR_MAX);
printf("롱형태의 최솟값 = %ld\n", LONG_MIN);
printf("롱형태의 최댓값 = %ld\n", LONG_MAX);





return 0;
}
