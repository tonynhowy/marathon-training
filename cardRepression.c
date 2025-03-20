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

int main(){
int a;
int b;
int c;
int soma;

scanf("%d %d %d", &a, &b, &c);

if(a <= b && a <= c) soma = b + c;
if(b <= a && b <= c) soma = a + c;
if(c <= a && c <= b) soma = a + b;

printf("%d\n", soma);

    return 0;
}
