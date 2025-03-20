/* Three Dice

Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points
Problem Statement

Takahashi has rolled three dice. They are showing numbers
a, b, and c on the top faces.

Find the sum of the numbers on the bottom faces.

Here, each of these dice is a standard cubic dice, where the sum of the numbers on opposite faces is 7.

Constrains:
1≤a,b,c≤6
All values in input are integers.

Input

Input is given from Standard Input in the following format:
a b c

Output
Print the sum of the numbers on the bottom faces of the three dice. */

#include <stdio.h> 

int main(){
int dado1;
int dado2;
int dado3;
int resultado;
scanf("%d %d %d", &dado1, &dado2, &dado3);

resultado = 21 - (dado1 + dado2 + dado3); 

printf("%d\n", resultado);

return 0;
}
