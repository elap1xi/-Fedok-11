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
	
	// 실수 선언 및 출력
	
	// 예제.1
	int a, b;
	scanf("%d %d",&a,&b);		//입력: 3 5 
	printf("%d + %d = %d",a,b,a+b); //출력: 3 + 5 = 8
	
	/*---- 논리 연산자 ----
	==============================
	&& : A and B (A와 B의 교집합)
	|| : A or B  (A와 B의 합집합)
	!  : not A   (A의 부정)
	==============================*/
	
	// if문 _ 성적이 80점 이상, 100점 이하인 경우 합격, 그 외는 불합격
	int a;
	printf("성적을 입력하세요");
	scanf("%d",&a);
	if (a>=80 && a<=100){
		printf("합격입니다");
	} else {
		printf("불합격입니다");
	}
	
	// if, else if 문
	int a;
	scanf("%d",&a);
	if (a>=80 && a<=100){	//80이상, 100이하인 경우 A출력
		printf("A");
	} else if(a>=70){	//70이상, 80미만인 경우 B출력
		printf("B");
	} else {		//위의 두 조건의 나머지 경우 C출력
		printf("C");
	}
	
	// 조건문 예제1
	int a;
	scanf("%d",&a);
	if (a>=90){
		printf("A");
	} else if(a>=80){
		printf("B");
	} else if(a>=70){
		printf("C");
	} else {
		printf("D");
	}
	
	// 조건문 예제 2
	int x;
	scanf("%d",&x);
	if(x>=1 && x<=12){
		if(x>=3 && x<=5){
			printf("봄");
		} else if(x>=6 && x<=8){
			printf("여름");
		} else if(x>=9 && x<=11){
			printf("가을");
		} else {
			printf("겨울");
		}
	} else {
		printf("1~12 사이의 숫자를 입력해주세요");
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

