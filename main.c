#include <stdio.h>
#include <Find.h>
#include <xcm.h>
#include <conio.h>
int main(){
    int i, j, n;
    char source[10], dest[10];
    int **p=getGraph();
    char **stations = getStations();

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
    //do{
        printf("\nEnter first two letters of your source station :\n");
        fflush(NULL);
        gets(source);
        findSources(stations, source);
        printf("Enter your source station number:\n");
        scanf("%d", &n);
        setSource(n);
        printf("Enter first two letters of your destination station :\n");
        gets(dest);
        gets(dest);
        findDests(stations, dest);
        printf("Enter your source station number:\n");
        scanf("%d", &n);
        setDest(n);

        routeIT(p);
    //}while();

    return 0;
}
