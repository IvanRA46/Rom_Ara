#include "RomAra.h"
#include <iostream>
using namespace std;

RomAra::RomAra(char) {
	this -> rom[100] = rom[100];
}

void RomAra::Rom_To_Ara(char rom[100]) {
	int valor[100];
	int num, i, numero = 0;
	num = strlen(rom);
	for (i = 0; i < num; i++) {
		if (rom[i]=='I' || rom[i]=='i') {
			valor[i] = 1;
		}
		if (rom[i] == 'V' || rom[i] == 'v') {
			valor[i] = 5;
		}
		if (rom[i] == 'X' || rom[i] == 'x') {
			valor[i] = 10;
		}
		if (rom[i] == 'L' || rom[i] == 'l') {
			valor[i] = 50;
		}
		if (rom[i] == 'C' || rom[i] == 'c') {
			valor[i] = 100;
		}
		if (rom[i] == 'D' || rom[i] == 'd') {
			valor[i] = 500;
		}
		if (rom[i] == 'M' || rom[i] == 'm') {
			valor[i] = 1000;
		}
		
	}

	for (i = 0; i < num; i++) {
		if (i == num - 1) {
			numero += valor[i];
		}
		else {
			if (valor[i] >= valor[i + 1]) {
				numero += valor[i];
			}
			else {
				numero -= valor[i];
			}
		}
	}

	cout << "\nEl numero en arabigo es: " << numero << "\n";

}
