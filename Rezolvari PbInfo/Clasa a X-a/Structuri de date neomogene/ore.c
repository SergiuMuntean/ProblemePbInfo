#include<stdio.h>

struct eveniment {
	int ore, minute, secunde;
};

void readEvent(FILE* f, struct eveniment* Event) {
	fscanf(f, "%d%d%d", &Event->ore, &Event->minute, &Event->secunde);
}

void printEvent(FILE* g, struct eveniment Event) {
	fprintf(g, "%d: %d: %d\n", Event.ore, Event.minute, Event.secunde);
}

void calculateSeconds(FILE* g, struct eveniment Event) {
	int sum = 0;
	sum += Event.ore * 3600 + Event.minute * 60 + Event.secunde;
	fprintf(g, "%d\n", sum);
}

void sumEvents(FILE* g, struct eveniment Event1, struct eveniment Event2) {
	int sum_Seconds = Event1.secunde + Event2.secunde;
	int sum_Minutes = Event1.minute + Event2.minute;
	int sum_Hours = Event1.ore + Event2.ore;
	if (sum_Seconds > 60) {
		sum_Seconds -= 60;
		sum_Minutes++;
	}
	if (sum_Minutes > 60) {
		sum_Minutes -= 60;
		sum_Hours++;
	}
	fprintf(g, "%d: %d: %d", sum_Hours, sum_Minutes, sum_Seconds);
}

int main(void) {
	FILE* f, * g;
	f = fopen("ore.in", "r");
	struct eveniment Event1, Event2;
	readEvent(f, &Event1);
	readEvent(f, &Event2);
	fclose(f);
	g = fopen("ore.out", "w");
	printEvent(g, Event1);
	printEvent(g, Event2);
	calculateSeconds(g, Event1);
	calculateSeconds(g, Event2);
	sumEvents(g, Event1, Event2);
	fclose(g);
}
