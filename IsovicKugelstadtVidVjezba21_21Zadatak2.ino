unsigned long otporR = 100000;
float kapacitetC = 47e-6;
float tau;
float vrijemePunjenja;

void setup() {
Serial.begin(9600);

tau = otporR * kapacitetC;
Serial.print("tau: ");
Serial.println(tau,3);

vrijemePunjenja = 5 * tau;
Serial.print("Vrijeme punjenja: ");
Serial.print(vrijemePunjenja,2);
}

void loop() {

}
