// Simplify the following expression into 
// 1) Sum of products
// 2) Product of sum
//  F = ACD' + C'D + AB'+ABCD


//  1)  On simplifing we get F = wx'+y'z+wy


int w,x,y,z;
int temp,temp1,temp2;
int F;

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
	for(int i=0;i<16;i++)
	{
		delay(1000);
		z=i%2;
		temp=i/2;
		y=temp%2;
		temp1 = temp/2;
		x = temp1%2;
		temp2 = temp1/2;
		w = temp2%2;
		F = (w&&!x) || (!y&&z) || (w&&y);
		if (F==0)
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
