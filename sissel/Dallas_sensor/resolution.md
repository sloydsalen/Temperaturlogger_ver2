## Hvor raskt/ofte kan jeg måle med Dallas sensoren?
Må finne databladet for DS18B20 : https://datasheets.maximintegrated.com/en/ds/DS18B20.pdf

På side 5 står det:

The resolution of the temperature sensor is user-configurable to 9, 10, 11, or 12 bits,
corresponding to increments of 0.5°C, 0.25°C, 0.125°C, and 0.0625°C, respectively. 
The default resolution at power-up is 12-bit.

På side 3 er det en tabell som heter AC Electrical Characteristics

<p align="center">
  <img src="Dallas_res_fig1.png" width="650"/>
</p>

Ut fra tabellen ser jeg at hvis jeg bruker 9 bits oppløsning kan jeg i teorien lese 10 ganger i sekundet og få en oppløsning på 0,5 grader. </p>
## Hva betyr dette i praksis for meg?

Hvis jeg vil måle oftere enn 1.5 ganger i sekundet må jeg endre oppløsningen til temperatursensoren.

## Hvordan gjør jeg dette?

Hver Dallas sensor har sin egen private hardware adresse. Jeg må først finne denne for å kunne endre oppløsningen til sensoren

### Finn hardware adresse:

Jeg har valgt å bruke et program som jeg fant her: https://www.hacktronics.com/Tutorials/arduino-1-wire-address-finder.html

Jeg har lastet det opp hit: Temperaturlogger_ver2/sissel/Dallas_sensor/one_wire_address_finder.ino.

Det eneste jeg har endret er nummer på pinnen som sensoren er koblet til på Arduinoen.

For at det skal stemme med oppsettet som er på versjon_01 av Dallas_Tlogger (se figur under) har jeg endret:

OneWire  ds(3);    // Connect your 1-wire device to pin 3

til:

OneWire  ds(2);    // Connect your 1-wire device to pin 2

Jeg kopierte koden inn i Arduino IDE'en, last den opp og  åpnert opp serial monitor.

svaret jeg fikk så omtrent slik ut: 0x28, 0xFF, 0x2B, 0x45, 0x4C, 0x04, 0x00, 0x10

## Endre oppløsningen til sensoren

For å endre oppløsningen kan du bruke dette programmer: Temperaturlogger_ver2/sissel/Dallas_sensor/Dallas_sett_opplosning.ino

Kopierte det inn i Arduino Ide'n. Før jeg lastet det opp til Arduinoen kopierte jeg med meg den adressen jeg fant i forrige punkt og bytte med den som står i programmet.  Lastet det opp og kjørte.

Dette programmet skriver den nye oppløsningen til EPROM. Det betyr at denne Dallas sensoren nå har fått den oppløsningen jeg satte som default ved power up.

## Hvor raskt går det?

Jeg sjekker hvor ofte jeg leser med: Temperaturlogger_ver2/sissel/Dallas_sensor/Dallas_Arduino_Tlogg_ver01.ino 

Det ble ca 9 ganger i sekundet. Det er noe annet som tar litt tid her.  Må sjekke videre ....... 
