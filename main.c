#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min(int* samples){
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
	printf("summe: %i\n",sum);
	return sum;
}

void siedlerWuerfel(){
	srand(time(NULL));
	int antwort;
	int Wurf1 = rand() % 6;
	int Wurf2 = rand() % 6;
	char* wuerfel1[] = {"Lehm", "Holz", "Schaf", "Erz", "Getreide", "Gold" };
	char* wuerfel2[] = {"Sonne", "Muehle", "Ritter", "Fragezeichen", "Raeuber", "Raeuber"};
	printf("erster Wuerfel: %s\n",wuerfel1[Wurf1]);
	printf("zweiter Wuerfel: %s\n", wuerfel2[Wurf2]);
	printf("weiterer wurf?: ");
	scanf("%1i", &antwort);

	if (antwort == 1) {
		siedlerWuerfel();
	}
}


void muenzAutomat()
{
	float input = 0;
	printf("Eingabe: ");
	scanf("%5f", &input);
	input *= 100;//konvertierung in cents
		     
	int maxCoins = 100;
	int coins[8] = {200, 100, 50, 20, 10, 5, 2, 1};
	int output[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int checkSolution = 0;
	int coinCount = 0;
	int inputBackup = input;

	if (input <= 20000)
	{

		for (int i = 0; i < 8; i++)
		{

			int count = 0;

			while ( count < maxCoins && (input - coins[i] >= 0) )
			{

				input -= coins[i];

				output[i]++;

				count++;
			}
		}

		for (int i = 0; i < 8; i++)
		{
			printf("Output: %3.2f: %d \n", (coins[i] / 100.0), output[i]);
			checkSolution += output[i] * coins[i];
			coinCount += output[i];
		}

		if (checkSolution != inputBackup)
		{
			printf("End: %d != %d \n", checkSolution, inputBackup);
		}

		printf("END with %d Coins! \n", coinCount);

	} else {

		printf("Geldbetrag ist zu Groß! \n");

	}

}
int main()
{
	return 0;
}
