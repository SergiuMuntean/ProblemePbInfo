#include<stdio.h>
#include<stdlib.h>

struct numar {
	int number, nrDiv, cifraControl, primaCifra;
};

void readNumbers(FILE* f, struct numar* Numere, int n) {
	for (int i = 0; i < n; i++) {
		fscanf(f, "%d", &Numere[i].number);
	}
}

int numarDivizori(int number) {
	int contor = 0;
	for (int d = 1; d * d <= number; d++) {
		if (number % d == 0) {
			contor += 2;
		}
		if (d * d == number) {
			contor--;
		}
	}
	return contor;
}

int cifControl(int number) {
	int sum = 0;
	do {
		sum = 0;
		while (number) {
			sum += number % 10;
			number /= 10;
		}
		number = sum;
	} while (sum > 9);
	return sum;
}

int primaCif(int number) {
	while (number > 9) {
		number /= 10;
	}
	return number;
}

void sortNumbers(struct numar* Numere, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (Numere[i].nrDiv > Numere[j].nrDiv) {
				struct numar aux = Numere[i];
				Numere[i] = Numere[j];
				Numere[j] = aux;
			}
			else if (Numere[i].nrDiv == Numere[j].nrDiv && Numere[i].cifraControl > Numere[j].cifraControl) {
				struct numar aux = Numere[i];
				Numere[i] = Numere[j];
				Numere[j] = aux;
			}
			else if (Numere[i].nrDiv == Numere[j].nrDiv && Numere[i].cifraControl == Numere[j].cifraControl && Numere[i].primaCifra > Numere[j].primaCifra) {
				struct numar aux = Numere[i];
				Numere[i] = Numere[j];
				Numere[j] = aux;
			}
			else if (Numere[i].nrDiv == Numere[j].nrDiv && Numere[i].cifraControl == Numere[j].cifraControl && Numere[i].primaCifra == Numere[j].primaCifra && Numere[i].number > Numere[j].number) {
				struct numar aux = Numere[i];
				Numere[i] = Numere[j];
				Numere[j] = aux;
			}
		}
	}
}

int main(void) {
	int n;
	FILE* f, * g;
	f = fopen("sort_div.in", "r");
	fscanf(f, "%d", &n);
	struct numar* Numere = malloc(n * sizeof(struct numar));
	readNumbers(f, Numere, n);
	fclose(f);
	for (int i = 0; i < n; i++) {
		Numere[i].nrDiv = numarDivizori(Numere[i].number);
	}
	for (int i = 0; i < n; i++) {
		Numere[i].cifraControl = cifControl(Numere[i].number);
	}
	for (int i = 0; i < n; i++) {
		Numere[i].primaCifra = primaCif(Numere[i].number);
	}
	sortNumbers(Numere, n);
	g = fopen("sort_div.out", "w");
	for (int i = 0; i < n; i++) {
		fprintf(g, "%d ", Numere[i].number);
	}
	fclose(g);
	return 0;
}
