#include<stdio.h>
#include<stdlib.h>

struct elev {
	int cod, media, absente;
};

void readElevi(FILE* f, struct elev* studenti, int n) {
	for (int i = 0; i < n; i++) {
		fscanf(f, "%d%d%d", &studenti[i].cod, &studenti[i].media, &studenti[i].absente);
	}
}

int eleviCuMedia10(struct elev* studenti, int n) {
	int contor = 0;
	for (int i = 0; i < n; i++) {
		if (studenti[i].media == 10) {
			contor++;
		}
	}
	return contor;
}

void mediaClasei(FILE* g, struct elev* studenti, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += studenti[i].media;
	}
	sum /= n;
	fprintf(g, "%d\n", sum);
}

void eleviDupaAbsente(FILE* g, struct elev* studenti, int n) {
	//sortare
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (studenti[i].absente < studenti[j].absente) {
				struct elev aux = studenti[i];
				studenti[i] = studenti[j];
				studenti[j] = aux;
			}
			else if (studenti[i].absente == studenti[j].absente && studenti[i].cod > studenti[j].cod) {
				struct elev aux2 = studenti[i];
				studenti[i] = studenti[j];
				studenti[j] = aux2;
			}
		}
	}
	fprintf(g, "%d %d %d\n", studenti[0].cod, studenti[0].media, studenti[0].absente);
	fprintf(g, "%d %d %d\n", studenti[1].cod, studenti[1].media, studenti[1].absente);
}

int main(void) {
	FILE *f, *g;
	f = fopen("qclasa.in", "r");

	struct elev elevi[40];
	int numarElevi;
	fscanf(f, "%d", &numarElevi);
	readElevi(f, elevi, numarElevi);
	fclose(f);
	
	g = fopen("qclasa.out", "w");
	int value = eleviCuMedia10(elevi, numarElevi);
	fprintf(g, "%d\n", value);
	mediaClasei(g, elevi, numarElevi);
	eleviDupaAbsente(g, elevi, numarElevi);
	fclose(g);
	return 0;
}
