//D0=NC, D1= TRIGGER, D2= ECHO, VCC= 5V
int long duration ;
int dist ;

const int trig=D1;
const int echo=D2;

void setup() 
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() 
{
  digitalWrite(trig,LOW);
  delay(2);
  
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  
  delay(100);
  digitalWrite(trig,LOW);

  duration=pulseIn(echo,HIGH);
  dist=duration*0.034/2;
    //dist=duration/2;

  Serial.print("Distance : ");
  Serial.println(dist);
}
