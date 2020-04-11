#include <stdio.h>
#include <stdlib.h>

void Board(char A[9][9], int n)
{
    int j, i;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = '\0';
        }
    }
    A[0][0] = '8';
    A[1][0] = '7';
    A[2][0] = '6';
    A[3][0] = '5';
    A[4][0] = '4';
    A[5][0] = '3';
    A[6][0] = '2';
    A[7][0] = '1';

    A[8][1] = 'a';
    A[8][2] = 'b';
    A[8][3] = 'c';
    A[8][4] = 'd';
    A[8][5] = 'e';
    A[8][6] = 'f';
    A[8][7] = 'g';
    A[8][8] = 'h';
    A[8][0] = '\0';

    A[0][1] = 'r';
    A[0][2] = 'n';
    A[0][3] = 'b';
    A[0][4] = 'q';
    A[0][5] = 'k';
    A[0][6] = 'b';
    A[0][7] = 'n';
    A[0][8] = 'r';

    A[1][1] = 'p';
    A[1][2] = 'p';
    A[1][3] = 'p';
    A[1][4] = 'p';
    A[1][5] = 'p';
    A[1][6] = 'p';
    A[1][7] = 'p';
    A[1][8] = 'p';

    A[6][1] = 'P';
    A[6][2] = 'P';
    A[6][3] = 'P';
    A[6][4] = 'P';
    A[6][5] = 'P';
    A[6][6] = 'P';
    A[6][7] = 'P';
    A[6][8] = 'P';

    A[7][1] = 'R';
    A[7][2] = 'N';
    A[7][3] = 'B';
    A[7][4] = 'Q';
    A[7][5] = 'K';
    A[7][6] = 'B';
    A[7][7] = 'N';
    A[7][8] = 'R';

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %c ", A[i][j]);
        }
        puts("\n");
    }
}

void step(char A[9][9], int n){
		int b,d;
		char a,c, defis;
		printf("Figure/kuda?\n");
		scanf("%c%d%c%c%d",&a,&b,&defis,&c,&d);
	//	printf("%c%d%c%d\n", a,b,c,d);
}


int main()
{
    char A[9][9];
    Board(A, 9);
    system("Pause");
    return 0;
}
