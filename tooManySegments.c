/*Problem Statement

You are given N intervals numbered 1 through N, that are as follows:

    if ti=1, Interval i is [li,ri][li​,ri​];
    if ti=2, Interval i is [li,ri)[li​,ri​);
    if ti=3, Interval i is (li,ri](li​,ri​];
    if ti=4, Interval i is (li,ri)(li​,ri​).

How many pairs of integers (i,j)(i,j) satisfying 1≤i<j≤N1≤i<j≤N are there such that Interval i and Interval j intersect?

Constraints:
2≤N≤2000
1≤ti≤4
1≤li<ri≤10^9
All values in input are integers.

Input

Input is given from Standard Input in the following format:

N
t1 l1​ r1
t2 l2​ r2
⋮⋮
tN lN​ rN

Output

Print the number of pairs of integers (i,j) such that Interval i and Interval j intersect.
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
