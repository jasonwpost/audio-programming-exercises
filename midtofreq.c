#include <stdio.h>
#include <math.h>

int main(){
	double semitone_ratio;
	double c0; // freq of MIDI note 0
	double c5; // freq of MIDI note middle C
	double frequency;
	int midinote; // given this note

	semitone_ratio = pow(2, 1/12.0); //12th root of 2
	// find middle C
	c5 = 220.0 * pow(semitone_ratio, 3);
	// MIDI note 0 is 5 octaves below middle C
	c0 = c5 * pow(0.5, 5);

	//calculate frequency for a given MIDI Note number
	midinote = 73;
	frequency = c0 * pow(semitone_ratio, midinote);

	printf("MIDI Note %d has frequency %f\n", midinote, frequency);

	return 0;

}