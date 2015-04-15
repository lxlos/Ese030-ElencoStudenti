#include <stdio.h>
#include <stdlib.h>
#define MAX_STRLEN 30
#define N 3

struct s_studente {
    char nome [MAX_STRLEN];
    char cognome [MAX_STRLEN];
    unsigned int eta;
    char classe[MAX_STRLEN];
};
typedef struct s_studente studente;

int main(int argc, char** argv) {
    int i;
    studente elenco[N];
    i=0;
    while(i<N) {
        printf("Inserire il %d° nome: ",i+1);
        scanf("%s", (elenco[i].nome));
        printf("Inserire il %d° cognome: ",i+1);
        scanf("%s", (elenco[i].cognome));
        printf("Inserire la %da eta: ",i+1);
        scanf("%d", &(elenco[i].eta));
        printf("Inserire la %da classe: ",i+1);
        scanf("%s", (elenco[i].classe));
        i=i+1;
    }
    i=0;
    while (i<N) {
     printf("%s; %s; %d; %s\n", elenco[i].nome,elenco[i].cognome,elenco[i].eta,elenco[i].classe);
     i=i+1;
     }
     return (EXIT_SUCCESS);
}