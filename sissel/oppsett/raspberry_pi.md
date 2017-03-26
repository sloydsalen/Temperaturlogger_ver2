Jeg starter med en ny Raspberry Pi 3 og et tomt SD kort på 16 GB </p>
Det første som må gjøres er å formatere SD-kortet.
(vi må kjøpe inn SD-kort lerser til sløydsalen).

### Formater SD kortet:
Bruk:SD Card Formatter  som er hentet fra https://www.sdcard.org/downloads/formatter_4/  </p>
### Legg inn Raspian:
Gå til: https://www.raspberrypi.org/downloads/noobs/ </p>
Last ned NOOBS zip filen. Det tar en liten stund.  Pakk den ut i en mappe på PC'en din. </p>
Kopier filene over til SD-kortet. </p>
Sett SD-kortet inn i Raspberry Pi'en og kobl den til skjerm,mus, tastatur og strøm. Nå må du velge hvilket operativsystem du ønsker å legge inn. Velg Raspian og vent på at operativsystemet blir installert.

Hvis du trenger mer veiledning ta en titt her: https://www.raspberrypi.org/learning/software-guide/ (Mars 2017)
eller her: https://www.raspberrypi.org/help/videos/#noobs-setup


### Jupyter Notebook på Raspberry Pi
Du har lagt inn Raspian. </p>
Du må ha sudo rettigheter. </p>
Vi starter med å oppgradere operativsystemet og legge inn python 2.7. Det som står etter $ er kommandoen som skal skrives inn. </p>

$ sudo apt-get update </p>
Så legger vi inn Python 2.7, Python pip og Python Development. (hvorfor python 2.7? Det er det de bruker på INF kurset) </p>
$ sudo apt-get -y install python2.7 python-pip python-dev </p>
Dette kan ta litt tid..... </p>



