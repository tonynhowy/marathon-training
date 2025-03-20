/*Problem Statement

Is it possible to get a sum of BB when throwing a die with six faces 1,2,…,6, A times?

Constraints:
1≤A≤100
1≤B≤1000
A and B are integers.

Input

Input is given from Standard Input in the following format:

A B

Output

If it is possible to get a sum of BB, print Yes; otherwise, print No.
*/

#include <stdio.h> 

int main(){
    int jogadas;
    int valor;
    scanf("%d %d", &jogadas, &valor);

    if (valor <= (jogadas * 6) && valor >= jogadas){
        printf("Yes");
    }
    else printf("No");
    
    return 0;
}
