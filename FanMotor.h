class FanMotor{
  int fanPin=0;
  int sensorPin=0;
  double sensorValue=0;
  public:
    FanMotor(int fp,int sp){
      fanPin=fp;
      sensorPin=sp;
    }

    void setup(){
      pinMode(fanPin,OUTPUT);  
    }
    void attach(){
      sensorValue=analogRead(sensorPin);
      if(sensorValue<500) digitalWrite(fanPin,HIGH); else digitalWrite(fanPin,LOW);
    }
  private:

};
