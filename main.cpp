#include "mbed.h"

Serial pc(USBTX, USBRX);
AnalogIn analog_value(PA_3); // A0 connecteur Arduino

int main()
{
    pc.printf("Exemple de conversion analogique-numerique\n");
    while(1) {
        float val = analog_value.read(); // Lecture de l'entrée analogique
        pc.printf("Valeur = %.6f \n", val);
        pc.printf("\033[1A");
        wait(0.2); // 200 ms
    }
}
