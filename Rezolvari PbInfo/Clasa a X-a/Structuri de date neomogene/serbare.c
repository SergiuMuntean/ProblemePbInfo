#include<stdio.h>
#include<stdlib.h>

struct copii {
	int numarCopii, tipUniforma;
};

void read(FILE* f, struct copii* elevi, int nrCopii) {
	for (int i = 0; i < nrCopii; i++) {
		fscanf(f, "%d%d", &elevi[i].numarCopii, &elevi[i].tipUniforma);
	}
}

int* copiiCuUniforma(struct copii* elevi, int nrCopii, int nrUniforme, int* types) {
	int* arr = malloc(nrUniforme * sizeof(int));
	for (int i = 0; i < nrUniforme; i++) {
		arr[i] = 0;
		types[i] = i + 1;
	}
	for (int i = 0; i < nrUniforme; i++) {
		for (int j = 0; j < nrCopii; j++) {
			if (elevi[j].tipUniforma == types[i]) {
				arr[i] += elevi[j].numarCopii;
			}
		}
	}
	return arr;
}

void sortArray(int* arr, int* types, int nrUniforme) {
	for (int i = 0; i < nrUniforme - 1; i++) {
		for (int j = i + 1; j < nrUniforme; j++) {
			if (arr[i] < arr[j]) {
				int aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
				int aux2 = types[i];
				types[i] = types[j];
				types[j] = aux2;
			}
		}
	}
}

int main(void) {
	int nrCopii, nrUniforme;
	FILE* f, * g;
	f = fopen("serbare.in", "r");
	fscanf(f, "%d%d", &nrCopii, &nrUniforme);
	struct copii* elevi = malloc(nrCopii * sizeof(struct copii));
	read(f, elevi, nrCopii);
	fclose(f);
	int* types = malloc(nrUniforme * sizeof(int));
	int* arrOfValues = copiiCuUniforma(elevi, nrCopii, nrUniforme, types);
	sortArray(arrOfValues, types, nrUniforme);
	g = fopen("serbare.out", "w");
	for (int i = 0; i < nrUniforme; i++) {
		fprintf(g, "%d ", types[i]);
	}
	fclose(g);
	free(types);
	free(arrOfValues);
	return 0;
}
