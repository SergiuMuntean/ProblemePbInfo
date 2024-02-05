#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct punct {
	int a, b;
};

void readStruct(struct punct* array, int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &array[i].a, &array[i].b);
	}
}

float* calculateDistance(struct punct* array, int n) {
	float arr[100];
	for (int i = 0; i < n; i++) {
		arr[i] = sqrt(pow(array[i].a, 2) + pow(array[i].b, 2));
	}
	return arr;
}

float maximum(float* array, int n) {
	float max = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

int numberOfPoints(float max, float* array, int n) {
	int contor = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] == max) {
			contor++;
		}
	}
	return contor;
}

int main(void) {
	struct punct puncte[100];
	int numarPuncte;
	scanf("%d", &numarPuncte);
	readStruct(puncte, numarPuncte);
	float* arr = malloc(numarPuncte * sizeof(float));
	arr = calculateDistance(puncte, numarPuncte);
	float max = maximum(arr, numarPuncte);
	int value = numberOfPoints(max, arr, numarPuncte);
	printf("%.3f %d", max, value);
	return 0;
}
