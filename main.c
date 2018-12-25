#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createEve(int);

void main() {
	int prevDays[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

	// initializes the time
	time_t t = time(NULL);
	struct tm timeStructure = *localtime(&t);

	// gets the day
	int month = timeStructure.tm_mon;
	int date = timeStructure.tm_mday;
	int day = ((date + prevDays[month]) + 6) % 366;
	
	// Calculate the days until christmas
	int daysTillChristmas = (365) - (day);

	createEve(daysTillChristmas);
}

void createEve(int tilChrist) {
	if (tilChrist < 1)
		printf("Merry Christmas!!! :)");
	else
		printf("Christmas ");

	for (int i=0;i<tilChrist;i++) {
		printf("Eve ");
	}
	printf("\n");
}
