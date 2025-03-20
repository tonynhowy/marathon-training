/* Problem Statement

There is an ultramarathon course totaling 100km. Water stations are set up every 5km along the course, including the start and goal, for a total of 21.

Takahashi is at the N km point of this course. Find the position of the nearest water station to him.

Under the constraints of this problem, it can be proven that the nearest water station is uniquely determined.

Constraints:
0≤N≤100
N is an integer.

Input

The input is given from Standard Input in the following format:

N

Output

Print the distance between the start and the water station nearest to Takahashi, in kilometers, in a single line.
*/

#include <stdio.h> 

int main(){
    int km;
    int maisProximo;
    scanf("%d", &km);
    if (km % 5 == 0){
        maisProximo = km;
    }
    else if(km % 5 >= 3){
        maisProximo = km + (5 - (km % 5));
    }
    else if(km % 5 < 3){
        maisProximo = km - (km % 5);
    }
    printf("%d", maisProximo);
    return 0;
}
