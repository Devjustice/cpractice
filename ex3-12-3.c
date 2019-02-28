#include <stdio.h>


int main(void)
{
   int a, b, c, d;
   int e, f, result; 
		    
  printf("첫번째 포인트를 입력하세요 ");
  scanf("%d %d", &a, &b);
						    
  printf("두번째 포인트를 입력하세요 ");
   scanf("%d %d", &c, &d);
								    
   e = c-a;
   f = d-b;
   result = e*f; 
								    
  printf("넓이: %d\n",result); 
											    

   return 0;
}
