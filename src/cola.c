#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../incl/cola.h"



int* createArray(int length){

    int* array = malloc(length * sizeof(int));

    for (int i = 0; i < length; i += 1){
        array[i] = 0;         
    }
    return array;
}

double* uniformDistribution(){
    
    double* dist = (double*)malloc(100 * sizeof(double));
    
    for (int i = 0; i < 100; i += 1){
        dist[i] = drand48();
    }
    return dist;
}

double* sequence(int rate){

    double* seq = malloc(100 * sizeof(double));
    double* dist = uniformDistribution();

    for (int i = 0; i < 100; i++){
        seq[i] = -log(1 - dist[i]) / rate;
        
    }

    free(dist);
    return seq;
}

double* times(int rate){
    double* time = malloc(100 * sizeof(double));
    double* seq = sequence(rate);

    for (int i = 0; i < 100; i++){
        time[i] = exp(-seq[i] * rate) * rate;
    }

    free(seq);
    return time;
}

void cola(int arrivalRate, int exitRate, int endTime){
    int* cola = createArray(endTime);
}