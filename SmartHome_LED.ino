#define BLYNK_PRINT Serial // digunakan untuk monitoring blynk di serial

#include <ESP8266WiFi.h>// file modul wifi
#include <BlynkSimpleEsp8266.h>// file untuk blynk


char auth[] = "iUKOISC6l-AUjrnM7pdCoMKzexNKdwms"; // token yang dikirim dari blynk ke email masing masing


char ssid[] = "Twig";
char pass[] = "Butterking16";

void setup() // fungsi utama dijalan sekali saja
{
  // Debug console
  Serial.begin(9600); // untuk monitor di serial print

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token,wifi dan passwordnya
}

void loop() // fungsi utama dijalankan berulang kali
{
  Blynk.run(); // pernintah untuk menjalankan blynk
}
