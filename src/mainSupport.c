#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../incl/mainSupport.h"


void valuesFromCommand(int argc, char* argv[], int* arrivalRate, int* exitRate, int* endTime)
{
    int c;
    while((c = getopt(argc, argv, "a:d:t:")) != -1)
    {   
        switch (c)
        {
        case 'a':
            *arrivalRate = atoi(optarg);
            break;
        
        case 'd':
            *exitRate = atoi(optarg);
            break;
        
        case 't':
            *endTime = atoi(optarg);
            break;
        }
    }

    return;
}