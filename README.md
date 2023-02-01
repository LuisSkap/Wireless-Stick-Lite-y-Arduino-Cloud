# Wireless-Stick-Lite-y-Arduino-Cloud
Como monitorear sensores de manera remota con tecnología Lora WAN y Arduino Cloud

LoRa es una tecnología de comunicación inalámbrica entre dispositivos IoT como lo son sensores o actuadores. LoRa se encarga de unir diferentes dispositivos en una red de tipo estrella donde el nodo se comunica con el Gateway más cercano a él. La arquitectura LoRa se compone principalmente por un Nodo/End device, Gateway, Servidor de red y un servidor de aplicación.  

   Nodo: Son los sensores o actuadores que envían o reciben información en paquetes de datos mediante comunicación LoRa hacia un Gateway.
   
   Gateway: Es un dispositivo que permite a los Nodos conectarse a internet para guardar la información en la nube. 
   
   Servidor de red: Tiene la tarea de administrar los mensajes recibidos por el o los Gateways.
   
   Servidor de aplicación: Es el encargado de las acciones a realizar cuando se tiene la información recibida.  


En este artículo te mostraremos los pasos a seguir para configurar un módulo LoRa Heltec Wireless Stick Lite como Nodo el cual se conecta a un sensor de humedad de suelo fc-28, el cual envía la información hacia otra tarjeta Heltec Wireless Stick Lite configurada como un Gateway. Mediante el módulo Wi-fi integrado guardamos la información adquirida en un servidor de red en la nube. 

