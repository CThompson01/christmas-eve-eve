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
	int day = (timeStructure.tm_mday + prevDays[month]) + 6;
	
	if (day > 365)
		day -= 365;

	int daysTillChristmas = (365) - (day);
	printf("Day: %d\n",day);
	printf("Eve Amount: %d\n", daysTillChristmas);
	createEve(daysTillChristmas);
}

void createEve(int tilChrist) {
	char total[1470];
	char eve[] = "eve ";
	for (int x=0;x<(tilChrist*4);x++) {
		total[x]=eve[x%4];
	}
	printf("Christmas %s\n", total);
}
