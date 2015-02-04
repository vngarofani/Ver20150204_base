#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int massimo(int valori[], int n);
float media(int valori[], int n);
float divisione(int dividendo, int divisore);
int quoziente(int dividendo, int divisore);
int restoDivisione(int dividendo, int divisore);
float parteDecimaleDivisione(int dividendo, int divisore);

int main(int argc, char** argv) {
    int v[SIZE];
    int mas;
    float med;
    float div;
    int quo;
    int res;
    float pd;
    int i;
    
    printf("Inserisci %d valori interi POSITIVI\n", SIZE);
    for (i=0;i<=SIZE-1;i++){
        scanf("%d",&v[i]);
    }
    // inserisci il codice necessario all'inserimento dei valori nell'array v
    
    mas = massimo(&v, SIZE);
    med = media(v, SIZE);
    div = divisione(v[0], v[1]);
    quo = quoziente(v[0], v[1]);
    res = restoDivisione(v[0], v[1]);
    pd = parteDecimaleDivisione(v[0], v[1]);
    
    printf("\nIl valore massimo è: %d\n", mas);
    printf("Il valore medio è: %f\n", med);
    
    printf("\nDivisione tra %d (dividendo) e %d (divisore)\n", v[0], v[1]);
    printf("Risultato (decimale): %f\n", div);
    printf("Parte decimale: %f\n", pd);
    printf("Quoziente (intero): %d\n", quo);
    printf("Resto (intero): %d\n", res);
    
    return (EXIT_SUCCESS);
}

/*
 * Calcola il valore massimo presente nell'array di valori interi POSITIVI, di dimensione n.
 */
int massimo(int valori[], int n) {
    
    int i;
    int max=-1;
    for (i=0;i<=SIZE-1;i++){
        if(valori[i]>max){
            max=valori[i];
        }
    }
    
    // TODO Implementa il codice della funzione
    return max;
}

/*
 * Calcola la media dei valori interi POSITIVI nell'array, di dimensione n.
 */
float media(int valori[], int n) {
    int i;
    int s=0;
    int med;
    for(i=0;i<=SIZE-1;i++){
        s=s+valori[i];
    }
    med=s/SIZE;
    
    
    
    // TODO Implementa il codice della funzione
    return med;
}

/*
 * Calcola il risultato decimale della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2.5
 */
float divisione(int dividendo, int divisore) {
    
    float div;
    div=dividendo/divisore;
    
    // TODO Implementa il codice della funzione
    return div;
}

/*
 * Calcola il quoziente (parte intera) della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int quoziente(int dividendo, int divisore) {
    int quo;
    quo=dividendo/divisore;
    // TODO Implementa il codice della funzione
    return quo;
}

/*
 * Calcola il resto della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int restoDivisione(int dividendo, int divisore) {
    float res;
    res=dividendo%divisore;
    // TODO Implementa il codice della funzione
    return res;
}

/*
 * Calcola la parte decimale del risultato della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 0.5
 * La parte decimale è, ovviamente, sempre inferiore a 1.
 */
float parteDecimaleDivisione(int dividendo, int divisore) {
    int pd;
    
    
    // TODO Implementa il codice della funzione
    return pd;
}

