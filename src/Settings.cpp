#include <Arduino.h>
#include <EEPROM.h>       //write and read EEPROM (to save and load settings)

void eepromWriteInt(int adr, int wert)
{
    // http://shelvin.de/eine-integer-zahl-in-das-arduiono-eeprom-schreiben/
    byte low, high;

    low = wert & 0xFF;
    high = (wert >> 8) & 0xFF;
    EEPROM.write(adr, low); // dauert 3,3ms
    EEPROM.write(adr + 1, high);
    return;
} // eepromWriteInt
//_____________________________________________________________________________________________

int eepromReadInt(int adr)
{
    // http://shelvin.de/eine-integer-zahl-in-das-arduiono-eeprom-schreiben/
    byte low, high;

    low = EEPROM.read(adr);
    high = EEPROM.read(adr + 1);
    return low + ((high << 8) & 0xFF00);
} // eepromReadInt
