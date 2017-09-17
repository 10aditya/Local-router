#include "Find.h"
#include <dijkstra.h>
#include <string.h>
#define V 112
int source, destination;
char** stat;
int SourceResultsIndex[20], DestResultsIndex[20];
void findSources(char **stations, char *s){
    int i, j=0;
    stat=stations;
    char results[20][20];
    printf("\nStation Results : \n");
    for(i=0; i<V; i++){
        if(strncasecmp(stations[i], s, 2)==0){
            strcpy(results[j],stations[i]);
            SourceResultsIndex[j]=i;
            printf("%d. %s\n", j+1, stations[i]);
            j++;
        }
    }
}

void setSource(int n){
    source=SourceResultsIndex[n-1];
};

void findDests(char **stations, char *s){
    int i, j=0, resultsIndex[20];
    char results[20][20];
    printf("\nStation Results : \n");
    for(i=0; i<V; i++){
        if(strncasecmp(stations[i], s, 2)==0){
            strcpy(results[j],stations[i]);
            DestResultsIndex[j]=i;
            printf("%d. %s\n", j+1, stations[i]);
            j++;
        }
    }
}

void setDest(int n){
    destination=DestResultsIndex[n-1];
}

void routeIT(int** p){
    dijkstra(p, source, destination, stat);
}

void printWC(){
    int i;

    for(i=0; i<=21; i++){
        printf("*");
    }

    printf("\n");

    for(i=0; i<7; i++){
        printf("*");
    }

    printf("WELCOME");

    for(i=0; i<=7; i++){
        printf("*");
    }

    printf("\n");

    for(i=0; i<=9; i++){
        printf("*");
    }

    printf("TO");

    for(i=0; i<=9; i++){
        printf("*");
    }

    printf("\n");

    for(i=0; i<=4; i++){
        printf("*");
    }

    printf("LOCAL ROUTER");

    for(i=0; i<=4; i++){
        printf("*");
    }

    printf("\n");

    for(i=0; i<=21; i++){
        printf("*");
    }

    printf("\n");
}
