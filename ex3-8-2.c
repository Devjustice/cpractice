#include<stdio.h>
#include<string.h>
int main(void){



char sport [20] = "Sports";
printf("우리반 친구들이  좋아하는 %s 종류\n",sport);
strcpy(sport,"Taekwondo");
printf("친구 a는 %s 를 좋아하네요\n",sport);
strcpy(sport,"swimming");
printf("친구 b는 %s 를 좋아하네요\n",sport);
strcpy(sport,"vollyball");
printf("친구 c는 %s 를 좋아하네요\n",sport);
strcpy(sport,"soccer");
printf("친구 d는 %s 를 좋아하네요\n",sport);
strcpy(sport,"bassball");
printf("친구 e는 %s 를 좋아하네요\n",sport);
strcpy(sport,"pongpong");
printf("친구 f는 %s 을 좋아하네요\n",sport);
return 0;
}
