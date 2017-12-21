/* Einbinden der ben�tigten Bibliotheken */
#include <avr/io.h>

int main() {

	/*	
	Alle Bits des DataDirectionRegister von Port D
	(DDRD) werden auf LOW gesetzt, sind somit als
	Eingang konfiguriert.
	In Bin�rschreibweise ist DDRD jetzt: 00000000 
	*/
	DDRD = 0x00;              

	/*	
	Das Bit an 8. Stelle (D7) wird auf Eins
	gesetzt -> Ausgang
	In Bin�rschreibweise ist DDRD jetzt: 10000000
	*/
	// TODO: D7 von DDRD auf HIGH schalten
	DDRD |=(1 << 7);
	/*
	Das Bit an 8. Stelle (D7) von PortD wird jetzt
	auf HIGH gesetzt. Die anderen Bits von Port D
	bleiben unver�ndert.
	In Bin�rschreibweise ist PortD jetzt: 1xxxxxxx
	*/
	// TODO: D7 von PortD auf HIGH schalten
	//PORTD &= ~(1 << 7); //F�rderband ausschlaten
	PORTD |= (1 << 7); //F�rderband einschalten

	while(1) {
		// Innerhalb dieser Endlosschleife kann sp�ter
		// der Programmcode erg�nzt werden
	}
}