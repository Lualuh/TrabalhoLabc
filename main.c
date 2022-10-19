#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

 int pontos_jogador=0, pontos_comp=0;
 int jogador, comp,d;

    
    do {
    printf ("0. Pedra\n");
    printf ("1. Papel\n");
    printf ("2. Tesoura\n");
    printf ("3. Largarto");
    printf ("4. Sponk");
    printf ("5. Sair\n");
    scanf ("%d", &jogador);
    if (jogador < 0 || jogador >=5)
    {
        exit(0);
    }
    srand(time(NULL));
     comp = rand() % 3; 
    switch(comp)
    {
        case 0: printf ("COMP -> Pedra\n"); break;
        case 1: printf ("COMP -> Papel\n"); break;
        case 2: printf ("COMP -> Tesoura\n"); break;
		case 3: printf ("COMP -> Largarto\n"); break;   
		case 4: printf ("COMP -> Sponk\n"); break;
    }
    if ((jogador == 0 && comp==2) || (jogador == 1 && comp == 0) || (jogador == 2 && comp == 1) 
    (jogador == 0 && comp==3) || (jogador==3 && comp==4) || (jogador==4 && comp==2) || (jogador==2 && comp==3) || (jogador==3 && comp==1) || 
    (jogador==1 && comp==4) || (jogador==4 && comp==0))
        {
            printf("Voce venceu!\n");
            pontos_jogador++;
    } 
    else if (jogador == comp) {
            printf ("Empate");
   } else {
           printf ("Comp venceu!\n");
            pontos_comp++;

        }
       
	do {
		printf ("Deseja jogar novamente? 1.sim 2.não");
		scanf ("%d", &d);
		if (d!=1&&d!=2) 
			printf ("Inválido");
		}while (d!=1&&d!=2);
	}while (d==1);
}

        }
       
	do {
		printf ("Deseja jogar novamente? 1.sim 2.não");
		scanf ("%d", &d);
		if (d!=1&&d!=2) 
			printf ("Inválido");
		}while (d!=1&&d!=2);
	}while (d==1);
}