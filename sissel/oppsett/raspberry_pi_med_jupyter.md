Jeg starter med en ny Raspberry Pi 3 og et tomt SD kort på 16 GB </p>
Det første som må gjøres er å formatere SD-kortet.
(vi må kjøpe inn SD-kort leser til sløydsalen).

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
Du må ha sudo-rettigheter. </p>
Vi starter med å oppgradere operativsystemet og legge inn python 2.7. Det som står etter $ er kommandoen som skal skrives inn. </p>

```

 $ sudo apt-get update 
 ```
 
 
Så legger vi inn Python 2.7, Python pip og Python Development. (hvorfor python 2.7? Det er det de bruker på INF kurset) </p>
```
$ sudo apt-get -y install python2.7 python-pip python-dev 
```
Dette kan ta litt tid..... </p>
```
$ python --version 
$ pip --version 
```

Disse to kommandoen skal vise deg hvilke versjoner du har fått installert. </p>
Når dette er klart kan vi legg inn Ipython og Jupyter.  Vi legger inn Ipython først: </p>
```
$ sudo apt-get -y install ipython ipython-notebook
```
Nå kan du legge inn Jupyter.

```
$ sudo -H pip install jupyter
```

Hvis du har for gammel pip versjon kan du få feilmeldinger.

```
$ sudo -H pip install --upgrade pip
```

Prøv på nytt med: 

```
$ sudo -H pip install jupyter
```

Dette fungerte da jeg installerte Jupyter.

### Test om det virker:
```
$ jupyter notebook
```

### Legge til Python biblioteker
```
$ sudo apt-get -y install python-scipy 
```

Du kan ta flere samtidig:
```
$sudo apt-get -y install python-matplotlib python-scipy
python-pandas 

```



