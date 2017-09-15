#include <stdio.h>
#include <Find.h>
#include <xcm.h>
#include <conio.h>
int main(){
    int i, j, n;
    char source[10], dest[10];
    int **p=getGraph();
    char **stations = getStations();

    for(i=0; i<112; i++){
       // for(j=0; j<112; j++){
          //  printf("%d ", p[i][j]);
        //}
        //printf("%s\n", stations[i]);
    }

    //do{
        printf("Enter first two letters of your source station :\n");
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
