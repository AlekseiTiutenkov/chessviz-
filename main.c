#include <stdio.h>
#include <stdlib.h>

void Board(char A[9][9], int n);
void step(char A[9][9], int n);
int main()
{
    char A[9][9];
    Board(A, 9);
    step(A,9);
    system("Pause");
    return 0;
}
