unsigned int adc = 612;
byte postotak = (adc * 100UL) / 1023;
unsigned int napon_mV = (adc * 5000UL) / 1023;
byte donjiBajt = adc;


void setup() {
Serial.begin(9600);

byte postotak = (adc * 100UL) / 1023;
Serial.print("postotak: ");
Serial.print(postotak);
Serial.println("%");

unsigned int napon_mV = (adc * 5000UL) / 1023;
Serial.print("Napon: ");
Serial.print(napon_mV);
Serial.println("mV");

Serial.print("DEC: ");
Serial.println(donjiBajt, DEC);

Serial.print("HEX: ");
Serial.println(donjiBajt, HEX);

Serial.print("BIN:");
Serial.println(donjiBajt, BIN);


}

void loop() {

}
