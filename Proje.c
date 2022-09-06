#include <stdio.h>
main(){
	// 문자열 출력
	printf("Hello World");
	
	// 변수 정의 및 출력
	int a, b, c;
	a=4, b=3, c=9;
	printf("%d",a); // 4
	printf("%d",b); // 3
	printf("%d",a+b+c); // 16
	printf("%d",a*b*c); //108
	
	// 문자열 입력 및 입력값 출력
	char s1[10];
	scanf("%s",&s1);
	printf("%s",s1);
	
	// 반복문 (for 문)
	int i;
	for (i=0; i<30; i++)
	{
		printf("Hello\n");
	}
	
	// A단까지 출력
	int a,i,j;
	printf("수 입력: ");
	scanf("%d",&a);
	for (i=1; i<a+1; i++)
	{
		printf("\n\n====%d 단====",i);
		for (j=1; j<10; j++)
		{
			printf("\n%d x %d = %d",i,j,i*j);
		}
	}
	
	// if문 예제
	int a;
	printf("성적을 입력하세요");
	scanf("%d",&a);
	if (a>=80 && a<=100){
		printf("합격입니다");
	} else {
		printf("불합격입니다");
	}
	
}

