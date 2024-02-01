#include<stdio.h>

struct fractie {
	int numarator;
	int numitor;
};

void citire(struct fractie* fraction) {
	int value1, value2;
	scanf("%d%d", &value1, &value2);
	fraction->numarator = value1;
	(*fraction).numitor = value2;
}

int cmmdc(struct fractie fraction) {
	while (fraction.numitor) {
		int rest = fraction.numarator % fraction.numitor;
		fraction.numarator = fraction.numitor;
		fraction.numitor = rest;
	}
	return fraction.numarator;
}

struct fractie maxim(struct fractie frac1, struct fractie frac2) {
	float value1 = (float)frac1.numarator / frac1.numitor;
	float value2 = (float)frac2.numarator / frac2.numitor;
	if (value1 > value2) {
		return frac1;
	}
	else {
		return frac2;
	}
}

void transformare(struct fractie* frac, int gcd) {
	frac->numarator = frac->numarator / gcd;
	frac->numitor = frac->numitor / gcd;
}

int main(void) {
	struct fractie fractie1;
	struct fractie fractie2;
	citire(&fractie1);
	citire(&fractie2);
	struct fractie max = maxim(fractie1, fractie2);
	int gcd = cmmdc(max);
	transformare(&max, gcd);
	printf("%d %d", max.numarator, max.numitor);
	return 0;
}
