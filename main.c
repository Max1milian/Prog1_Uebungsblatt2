#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	for (int i = n; i >=0; --i) {
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
	srand(time(NULL));
	int Wurf1 = rand() % 6;
	int Wurf2 = rand() % 7;
	char* wuerfel1[] = {"Lehm", "Holz", "Schaf", "Erz", "Getreide", "Gold" };
	char* wuerfel2[] = {"Sonne", "Muehle", "Ritter", "Fragezeichen", "Raeuber", "Raeuber"};
	printf("erster Wuerfel: %s\n",wuerfel1[Wurf1]);
	printf("zweiter Wuerfel: %s\n", wuerfel2[Wurf2]);
}

int main()
{
	
	return 0;
}
