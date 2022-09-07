#include <stdio.h>
main(){
	// 문자열 출력
	printf("Hello World");
	
	// 변수 선언 및 출력
	int a, b, c;		//정수 a,b,c 선언
	a=4, b=3, c=9;
	printf("%d",a); 	//출력: 4
	printf("%d",b); 	//출력: 3
	printf("%d",a+b+c); 	//출력: 16
	printf("%d",a*b*c); 	//출력: 108
	
	// 문자열 입력 및 입력값 출력
	char s1[10];		//문자열 선언
	scanf("%s",&s1);	//문자열을 입력받음
	printf("%s",s1);
	
	// 예제.1
	
	
	// if문 예제 _ 성적이 80점 이상, 100점 이하인 경우 합격, 그 외는 불합격
	int a;
	printf("성적을 입력하세요");
	scanf("%d",&a);
	if (a>=80 && a<=100){
		printf("합격입니다");
	} else {
		printf("불합격입니다");
	}
	
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
}

