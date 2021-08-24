#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "../incl/cola.h"
#include "../incl/mainSupport.h"

int main(int argc, char* argv[]){

    int arrivalRate = 0;
	int serviceRate = 0;
	int endTime = 0;

	valuesFromCommand(argc, argv, &arrivalRate, &serviceRate, &endTime);

	double* arrivalTime = times(arrivalRate);
	//double* serviceTime = sequence(serviceRate);

	double sum = 0.0;
	for (int i =0; i < 100; i++){
		sum += arrivalTime[i];
	}
	printf("suma: %lf\n", sum);

	free(arrivalTime);
	//free(serviceTime);
    return 0;
}