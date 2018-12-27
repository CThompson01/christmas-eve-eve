#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void createEve(int, int);

int main(int argc, char* argv[]) {
	int merry=0;

	if (argc>=2) {
		for(int i=1; i<argc;i++) {
			if (strcmp(argv[i],"-m")==0 || strcmp(argv[i],"---merry"))
				merry=1;
			else
				printf("%s is not a argument",argv[i]);
		}
	}

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

	createEve(daysTillChristmas, merry);
	
	return 0;
}

void createEve(int tilChrist, int isMerry) {
	if (tilChrist < 1)
		printf("Merry Christmas!!! :)");
	else {
		if (isMerry==1)
			printf("Merry ");
		printf("Christmas ");
	}

	for (int i=0;i<tilChrist;i++) {
		printf("Eve ");
	}
	printf("\n");
}
