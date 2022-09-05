#include <stdio.h>
main(){
	
	printf("Hello World");
	int a, b, c;
	a=4, b=3, c=9;
	printf("\n%d",a+b+c);
	
	char s1[10];
	scanf("%s",&s1);
	printf("%s",s1);
	
	int i;
	for (i=0; i<30; i++)
	{
		printf("Hello\n");
	}
	
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
	
	int a;
	printf("성적을 입력하세요");
	scanf("%d",&a);
	if (a>=80 && a<=100){
		printf("합격입니다");
	} else {
		printf("불합격입니다");
	}
	
}

