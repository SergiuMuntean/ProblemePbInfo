#include<stdio.h>

struct dataNasterii {
	int an, luna, zi;
};

int main(void) {
	int numberOfPersons;
	scanf("%d", &numberOfPersons);
	struct dataNasterii persons[1000];
	for (int i = 0; i < numberOfPersons; i++) {
		scanf("%d%d%d", &persons[i].an, &persons[i].luna, &persons[i].zi);
	}
	struct dataNasterii max = { 2024, 12, 31 };

	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an < max.an) {
			max.an = persons[i].an;
		}
	}
	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an == max.an) {
			if (persons[i].luna < max.luna) {
				max.luna = persons[i].luna;
			}
		}
	}
	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an == max.an) {
			if (persons[i].luna == max.luna) {
				if (persons[i].zi < max.zi) {
					max.zi = persons[i].zi;
				}
			}
		}
	}

	int value_max = 0;
	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an == max.an && persons[i].luna == max.luna && persons[i].zi == max.zi) {
			value_max = i;
			break;
		}
	}
	
	struct dataNasterii min = { 0, 1, 1 };

	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an > min.an) {
			min.an = persons[i].an;
		}
	}
	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an == min.an) {
			if (persons[i].luna > min.luna) {
				min.luna = persons[i].luna;
			}
		}
	}
	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an == min.an) {
			if (persons[i].luna == min.luna) {
				if (persons[i].zi > min.zi) {
					min.zi = persons[i].zi;
				}
			}
		}
	}
	int value_min = 0;
	for (int i = 0; i < numberOfPersons; i++) {
		if (persons[i].an == min.an && persons[i].luna == min.luna && persons[i].zi == min.zi) {
			value_min = i;
			break;
		}
	}

	printf("%d %d", value_min + 1, value_max + 1);

	return 0;
}
