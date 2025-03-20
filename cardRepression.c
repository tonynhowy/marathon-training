/*Problem Statement

There are three cards on the desk, each with a positive integer written on it. The integers on the cards are A, B, and C.
You have chosen two cards and picked them up.
Find the maximum possible sum of the integers written on the picked cards.

Constraints:
1≤A,B,C≤100
All values in input are integers.

Input

Input is given from Standard Input in the following format:

A B C

Output

Print the answer as an integer.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    

    int *l = (int *)malloc(n * sizeof(int));
    int *r = (int *)malloc(n * sizeof(int));
    int *fechamentoEsquerda = (int *)malloc(n * sizeof(int));
    int *fechamentoDireita = (int *)malloc(n * sizeof(int));
    
    int t;

    for (int i = 0; i < n; i++){
        scanf("%d %d %d", &t, &l[i], &r[i]);
        if (t == 1) {
            fechamentoEsquerda[i] = 1;
            fechamentoDireita[i] = 1;
        }
        else if (t == 2) {
            fechamentoEsquerda[i] = 1;
            fechamentoDireita[i] = 0;
        }
        else if (t == 3) {
            fechamentoEsquerda[i] = 0;
            fechamentoDireita[i] = 1;
        }
        else if (t == 4) {
            fechamentoEsquerda[i] = 0;
            fechamentoDireita[i] = 0;
        }
    }
    
    int count = 0;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){

            if (r[i] < l[j] || (r[i] == l[j] && (!fechamentoDireita[i] || !fechamentoEsquerda[j])))
                continue;

            if (r[j] < l[i] || (r[j] == l[i] && (!fechamentoDireita[j] || !fechamentoEsquerda[i])))
                continue;

            count++;
        }
    }
    
    printf("%d\n", count);
    
    free(l);
    free(r);
    free(fechamentoEsquerda);
    free(fechamentoDireita);
    
    return 0;
}
