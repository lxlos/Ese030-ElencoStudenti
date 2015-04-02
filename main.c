#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    // Dichiara le variabili locali
    studente elenco[N];
    char stringaInput[MAX_STRLEN+1];
    int i;
    
    // Codice per l'inserimento, da parte dell'utente, dei dati
    printf("Inserisci i dati per %d studenti\n", N);
    for(i=0; i<N; i++) {
        printf("\nInserisci il nome (%d max): ", MAX_STRLEN);
        scanf("%s", stringaInput);
        strcpy(elenco[i].nome, stringaInput);
        printf("Inserisci il cognome (%d max): ", MAX_STRLEN);
        scanf("%s", stringaInput);
        strcpy(elenco[i].cognome, stringaInput);
        printf("Inserisci l'eta': ");
        scanf("%d", &(elenco[i].eta));
        printf("Inserisci la classe (%d max): ", MAX_STRLEN);
        scanf("%s", stringaInput);
        strcpy(elenco[i].classe, stringaInput);
    }
    
    // Codice per la stampa dei dati (uno studente per riga)
    for(i=0; i<N; i++) {
        printf("%s; %s; %d; %s\n", 
                elenco[i].nome,
                elenco[i].cognome,
                elenco[i].eta,
                elenco[i].classe);
    }
    
    return (EXIT_SUCCESS);
}

