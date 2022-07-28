
// Design and implement T-flipflop using D-flipflop

// On simplifing D = QT' + Q'T

int Q,T;
int temp;
int D;

void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(2, a); 
  digitalWrite(3, b); 
  digitalWrite(4, c); 
  digitalWrite(5, d); 
  digitalWrite(6, e); 
  digitalWrite(7, f);     
  digitalWrite(8, g); 
}
void setup() 
{
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);            
}
void loop()
{ 
	for(int i=0;i<4;i++)
	{
		delay(1000);
		T=i%2;
		temp=i/2;
		Q=temp%2;
		temp=Q/2;
	        D = (Q&&!T) || (!Q&&T);
		if (D==0)
			{
			sevenseg(0,0,0,0,0,0,1);
			delay(1000);
			sevenseg(1,1,1,1,1,1,1);
			}
		else{
	  sevenseg(1,0,0,1,1,1,1);
	  delay(1000);
	  sevenseg(1,1,1,1,1,1,1);
			}
	}
}
