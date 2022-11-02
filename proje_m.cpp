// 불이 꺼졌다 켜졌다 (Digital)
const int LED = 3;      	//3번 핀의 LED를 사용하겠다고 선언 [전역변수]
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()   // (Digital)
{
  digitalWrite(3, HIGH);	//킨 상태
  delay(1000); 				    //1초 멈춤
  digitalWrite(3, LOW);		//꺼진 상태
  delay(1000); 			    	//1초 멈춤
}

void loop()   // (Analog)
{
  analogWrite(3, 255);  	//킨 상태
  delay(1000); 				    //1초 멈춤
  analogWrite(3, 0);	  	//꺼진 상태
  delay(1000); 			    	//1초 멈춤
}


// 불의 밝기를 점점 밝아지게 한 후, 다시 점점 어두워지게 하기
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  for( int i = 10; i<=255; i=i+10){
    analogWrite(3, i);
    delay(100);
  }
  for(int i=255; i>=10; i=i-10){
    analogWrite(3, i);
    delay(100);
  }
}
