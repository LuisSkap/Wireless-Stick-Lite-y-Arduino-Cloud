#include "thingProperties.h"
#include "heltec.h"
#define BAND    915E6 

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  Heltec.begin(false /*DisplayEnable Enable*/, true /*Heltec.LoRa Disable*/, true /*Serial Enable*/, true /*PABOOST Enable*/, BAND /*long BAND*/);
  //Serial.begin(9600);
}

void loop() {
  ArduinoCloud.update();
  // Your code here 
   int packetSize = LoRa.parsePacket();
  if (packetSize) {
    	// received a packet
    	Serial.print("Received packet '");
    	// read packet
   	 while (LoRa.available()) {
	  lectura = LoRa.read();
  	//Serial.print(lectura);
  	  }
    // print RSSI of packet
    Serial.print("' with RSSI ");
    Serial.println(LoRa.packetRssi());
    int a = lectura.toInt();
    soil = (a - 48) *9
    Serial.print(" Humedad del suelo: ");
    Serial.print(soil);
  }
  
}
