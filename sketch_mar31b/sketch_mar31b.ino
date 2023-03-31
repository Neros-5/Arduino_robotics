// motor 1 variables
int ena = 25;
int in1 = 26;
int in2 = 27;

// motor 2 variables
int enb = 14;
int in3 = 32;
int in4 = 33;

void forward(){
  digitalwite(in1, HIGH);
  digitalwite(in2, LOW);
  
  digitalwite(in3, HIGH);
  digitalwite(in4, LOW)

  analogwrite(ena, 150);
  analogwrite(enb, 150);
}

void reverse(){
  digitalwite(in1, LOW);
  digitalwite(in2, HIGH);
  
  digitalwite(in3, LOW);
  digitalwite(in4, HIGH);

  analogwrite(ena, 150);
  analogwrite(enb, 150);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

ledcAttachPin(ena, 2);
ledcAttachPin(enb, 2);
ledcSetup(0, 1000, 8);
}

void loop() {
  // put your main code here, to run repeatedly:
forward();

delay(5000);

reverse();

delay(5000);

}
