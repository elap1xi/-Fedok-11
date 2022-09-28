#include <stdio.h> 		// studio.h가 아니고 stdio.h
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
	
	/*---- 산술 연산자 ----
	==============================
	+ : 덧셈
	- : 뺄셈
	* : 곱셈
	/ : 나눗셈
	% : 나눗셈의 나머지
	==============================*/
	
	// 문자열 입력 및 입력값 출력
	char s1[10];		//문자열 선언
	scanf("%s",&s1);	//문자열을 입력받음
	printf("%s",s1);
	
	// 실수 입력 및 출력
	float a;
	scanf("%f", &a);	//입력: 3.14159265358
	printf("%f", a);	//출력: 3.141593 [소숫점 7자리에서 반올림]
	printf("%.3f", a); 	//출력: 3.141 [소숫점 3자리까지 출력]
	printf("%.4f", a); 	//출력: 3.1415 [소숫점 4자리까지 출력]
	
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
	
	/*---- 관계 연산자 ----
	==============================
	a > b : a는 b 초과
	a < b : a는 b 미만
	a >= b : a는 b 이상
	a <= b : a는 b 이하
	a == b : a와 b는 같다
	a != b : a와 b는 같지 않다
	==============================*/
	
	// if문 _ 입력값 홀수, 짝수 구별
	int a;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("짝수입니다");
	} else {
		printf("홀수입니다");
	}
	
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
	
	// 반복문 (while 문)
	int a = 1;
	while(a<=100){
		printf("%d\n",a);	
		a = a+1;
	}				// 1부터 100까지 출력
	
	// 반복문 (for 문)
	int a;
	for(a=1; a<=100; a++){			// a=1; -> 시작값 / a<=100; -> 반복조건 / a++ -> 증감값
		printf("%d\n",a);
	}				// 1부터 100까지 출력
	
	// 7단 출력
	int a;
	for(a=1; a<=9; a++){
		printf("7 * %d = %d\n",a,7*a);
	}	
	
	// 2단부터 9단까지 출력(중첩 for문)
	int a,j;
	for (a=2; a<10; a++)
	{
		for (j=11; j<10; j++)
		{
			printf("%d * %d = %d\n",a,j,a*j);
		}
		printf("\n");
	}
	
	// 1부터 입력받은 값 까지 출력
	int a, b;
	scanf("%d",&a);
	for(b=1; b<=a; b++){
		printf("%d\n",b);
	}
	
	// 입력받은 값 약수 출력
	int a,b;
	scanf("%d",&a);
	for(b=1; b<=a; b++){
		if(a%b==0){
			printf("%d ",b);
		}
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
	return 0; 	//코드 종료
}

