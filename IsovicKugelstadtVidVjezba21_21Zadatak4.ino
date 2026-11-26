
char kuciste = 'T';  // char: zauzima 1 bajt
bool termickaZastita = false;  // bool: zauzima 1 bajt
unsigned int ulazniNapon_mV = 12500;  // unsigned int: zauzima 2 bajta
unsigned int izlazniNapon_mV = 5000;  // unsigned int: zauzima 2 bajta
unsigned int struja_mA = 450;  // unsigned int: 450 stane u 2 bajta
unsigned long vrijeme_s = 86400UL;  // unsigned long: zauzima 4 bajta


float U_pad;
float P_dis;
float E_toplina;

void setup() {
  Serial.begin(9600);

U_pad = (ulazniNapon_mV - izlazniNapon_mV) / 1000.0;
P_dis = U_pad * (struja_mA / 1000.0);
E_toplina = P_dis * vrijeme_s;

Serial.println("");

Serial.print("Kućište: ");
Serial.println(kuciste);

Serial.print("Termička zaštita: ");
Serial.println(termickaZastita);

Serial.print("Pad napona: ");
Serial.print(U_pad);
Serial.println(" mV");

Serial.print("Disipirana snaga: ");
Serial.print(P_dis);
Serial.println(" W");

Serial.print("Ukupna olobođena energija: ");
Serial.print(E_toplina);
Serial.println(" J");

Serial.print("Ukupno zauzeće SRAM-a: ");
Serial.print(sizeof(kuciste) + sizeof(termickaZastita) +
  sizeof(ulazniNapon_mV) + sizeof(izlazniNapon_mV) + 
  sizeof(struja_mA) + sizeof(vrijeme_s) + 
  sizeof(U_pad) + sizeof(P_dis) + sizeof(E_toplina));

Serial.println(" bajtova od 2048 B");
}

void loop(){

}