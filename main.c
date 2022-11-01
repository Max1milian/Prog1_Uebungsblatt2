#include <stdio.h>
#include <stdlib.h>

int min(int* samples, int n){
	return samples[0];
}

int max(int* samples, int n){
	return samples[n - 1];
}

float mean(int* samples, int n){
	return (float)samples[(n - 1) / 2];
}

void printIntArray(int* samples, int n){
	for (int i = n; n >=0; --i) {
		printf("number: %i\n", samples[i]);	
	}
}
int sumIntArray(int* samples, int n){
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += samples[i];
	}
	return sum;
}

void siedlerWuerfel(){
	char* wuerfel1[] = {"Lehm", "Holz", "Schaf", "Erz", "Getreide", "Gold" };
	char* wuerfel2[] = {"Sonne", "Muehle", "Ritter", "Fragezeichen", "Raeuber", "Raeuber"};
}
int main(int argc, char *argv[])
{
	
	return 0;
}
