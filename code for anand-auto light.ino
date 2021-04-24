

/// switch manual overide
/// double tap -- environment light caliberation

#define Bulb 10
#define LDR A0
#define Button 5

int threshold_value;

void setup(){
pinMode(Bulb,OUTPUT);

}

void loop(){

int ldr_sense = analogRead(LDR);

if(pulseIn(Button,HIGH,10e6) > .5*10e5)
    threshold_value = ldr_sense;

dig_ldr =  ldr_sense > threshold_value ? HIGH : LOW;


if (dig_ldr ){
    bool previous = true;
    if (line_on)
    {

    }
    else{
    digitalWrite(Bulb,HIGH);
    }
}

}
