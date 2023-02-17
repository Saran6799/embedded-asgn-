int s1 = 1;   // set '1' as switch 1
int s2 = 2;   // set '2' as switch 2
int led1 = 9; // set '9' as signal A 
int led2 = 6; // set '6' as signal B 

// My first 5 letters of my surname is 'VELUM'
// v = 5
// E = 5
// L = 12
// U = 6
// M = 13
int a = 500;  //  'a' =  1st letter*100 = 5*100  = 500
int b = 500;  //  'b' =  2nd letter*100 = 5*100 = 500
int c = 16;   //  'c' =  3rd letter + 4 = 12 + 4 = 16
int d = 3500; //  'd' =  4th letter*500 = 6*500 = 3000
int mr = 1250;

// mr is calculation: 
// 'c' is 'number of pulse in block' this is calculated by a+50; a=500; 500+50 = 550; 
// continuously adding +50 from 500 for 16 times. so at last pulse we get 1250 pulse in block
 
// calculating of parameter 'mode' by using the form of remainder(fifth letter/4) + 1 = rem(13/4) + 1 = 1+1 = 2. The result is '2'.So we use'2'as mode 00
// The system of mode '2' follows the condition if switch 2 = 0 state then pulse is Normal 
// and if switch 2 = 1 state then condition is 'pulse generate inverted form of complete sig A Waveform(from the largest pulse to the shortest until switch 2 set back to 0)' 

int rs1 = 0;  //  reading the signal A from switch 1 
int rs2 = 0;  //  reading the signal B from switch 2
   
void setup() {
  // Programming my setup code here, to run only one time:
  pinMode(s1, INPUT);     //  s1 pin(switch 1) = INPUT
  pinMode(s2, INPUT);     //  s2 pin(switch 2) = INPUT
  pinMode(led1, OUTPUT);  //  led2 pin(sigA) = OUTPUT
  pinMode(led2, OUTPUT);  //  led1 pin(sigB) = OUTPUT

}


void loop()
{
  rs1 = digitalRead(s1); // rs1 is taking reading from s1
  rs2 = digitalRead(s2); // rs2 is taking reading from s2
 {
   if(rs1==low)
   {
      digitalwrite(led2,high);
      delay(50);
      digitalwrite(led2,low);
      delay(2000);
      digitalwrite(led1,high);
      delay(500);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(550);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(600);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(650);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(700);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(750);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(800);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(850);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(900);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(950);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(1000);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(1050);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high); 
      delay(1100);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(1150);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high);
      delay(1200);
      digitalwrite(led1,low);
      delay(500);
      digitalwrite(led1,high); 
      delay(1250);
      digitalwrite(led1,low);
      delay(500);
   }
 else
    {
      digitalWrite(led2, HIGH);
      delay(50);
      digitalWrite(led2, LOW);

      for(int i =0; i<c;i++)
      {
        digitalWrite(led1, HIGH);
        delay(mr);
        digitalWrite(led1, LOW);
        delay(b);
        mr = mr-50;
      } 

      digitalWrite(led1, LOW);
      delay(d);
      
      
      }  }



}