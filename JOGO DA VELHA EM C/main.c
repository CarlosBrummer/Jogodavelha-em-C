#include <stdio.h>
#include <stdlib.h>

void tabuleiro2(char tabuleiro[3][3]);


int main()

{
    int cmd;
    do
        {
            char tabuleiro[3][3] ={{'1','2','3'},
                           {'4','5','6'},
                           {'7','8','9'}};

            int i, j, contagem, par, t;
            int m, n;

            for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    tabuleiro[i][j] = ' ';
                }
            contagem=1;

        do{
            system("cls");
            tabuleiro2(tabuleiro);
            printf("\t\n          Digite a linha que deseja marcar: ");
            scanf("%d",&m);
            printf("\t\n          Digite a coluna que deseja marcar: ");
            scanf("%d",&n);
            putchar('\n');

            if(m<1|n<1|m>3|n>3)
                {
                    printf("\t\n          Valor da coluna e matriz fora do esperado!\n");
                    for(t=0;t<1E9;t++);
                }
            if(tabuleiro[m-1][n-1] != ' ')
                {
                    printf("\t\n          Valor da coluna e matriz ja esta preenchida!\n");
                    for(t=0;t<1E9;t++);
                }
            else

                {
                    if(par%2 ==0)
                        {
                            tabuleiro[m-1][n-1] = 'X';
                        }
                    else
                        {
                            tabuleiro[m-1][n-1] = 'O';
                        }
                    par++;
                    contagem++;
                }


            if (tabuleiro[0][0]== 'X' && tabuleiro[0][1]== 'X' && tabuleiro[0][2] == 'X'){contagem=11;}
            if (tabuleiro[1][0]== 'X' && tabuleiro[1][1]== 'X' && tabuleiro[1][2] == 'X'){contagem=11;}
            if (tabuleiro[2][0]== 'X' && tabuleiro[2][1]== 'X' && tabuleiro[2][2] == 'X'){contagem=11;}
            if (tabuleiro[0][0]== 'X' && tabuleiro[1][0]== 'X' && tabuleiro[2][0] == 'X'){contagem=11;}
            if (tabuleiro[0][1]== 'X' && tabuleiro[1][1]== 'X' && tabuleiro[2][1] == 'X'){contagem=11;}
            if (tabuleiro[0][2]== 'X' && tabuleiro[1][2]== 'X' && tabuleiro[2][2] == 'X'){contagem=11;}
            if (tabuleiro[0][0]== 'X' && tabuleiro[1][1]== 'X' && tabuleiro[2][2] == 'X'){contagem=11;}
            if (tabuleiro[0][2]== 'X' && tabuleiro[1][1]== 'X' && tabuleiro[2][0] == 'X'){contagem=11;}

            if (tabuleiro[0][0]== 'O' && tabuleiro[0][1]== 'O' && tabuleiro[0][2] == 'O'){contagem=12;}
            if (tabuleiro[1][0]== 'O' && tabuleiro[1][1]== 'O' && tabuleiro[1][2] == 'O'){contagem=12;}
            if (tabuleiro[2][0]== 'O' && tabuleiro[2][1]== 'O' && tabuleiro[2][2] == 'O'){contagem=12;}
            if (tabuleiro[0][0]== 'O' && tabuleiro[1][0]== 'O' && tabuleiro[2][0] == 'O'){contagem=12;}
            if (tabuleiro[0][1]== 'O' && tabuleiro[1][1]== 'O' && tabuleiro[2][1] == 'O'){contagem=12;}
            if (tabuleiro[0][2]== 'O' && tabuleiro[1][2]== 'O' && tabuleiro[2][2] == 'O'){contagem=12;}
            if (tabuleiro[0][0]== 'O' && tabuleiro[1][1]== 'O' && tabuleiro[2][2] == 'O'){contagem=12;}
            if (tabuleiro[0][2]== 'O' && tabuleiro[1][1]== 'O' && tabuleiro[2][0] == 'O'){contagem=12;}

        }while(contagem <= 9);

        if(contagem == 10)
            {
                tabuleiro2(tabuleiro);
                putchar('\n');
                printf("\t\n          Deu velha!\n");
                putchar('\n');
            }

        if(contagem == 11)
            {

                tabuleiro2(tabuleiro);
                putchar('\n');
                printf("\t\n          X ganhou!\n");
                putchar('\n');
            }
        if(contagem == 12)
            {

                tabuleiro2(tabuleiro);
                putchar('\n');
                printf("\t\n          O ganhou!\n");
                putchar('\n');
            }

        printf("\t\n          Digite (1) para jogar novamente, (2) para sair!\n");
        scanf("%d",&cmd);

        }while(cmd != 2);
        return 0;

}

void tabuleiro2(char tabuleiro[3][3])

{
    putchar('\n');
    printf("\t      %c  |  %c  |  %c\n",tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("\t      --------------\n");
    printf("\t      %c  |  %c  |  %c\n",tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("\t      --------------\n");
    printf("\t      %c  |  %c  |  %c\n",tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}
