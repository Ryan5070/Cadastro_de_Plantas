#include <stdio.h>

int main(void) {

    int opcao, op_exo, op_carni, op_nati, op_psico, op_medi;

    opcao = 0;

    printf ("==== CADASTRO DE PLANTAS ====\n");

    printf ("[1] plantas exoticas\n");
    printf ("[2] plantas carnivoras\n");
    printf ("[3] plantas nativas\n");
    printf ("[4] plantas psicoativas\n");
    printf ("[5] plantas medicinais\n");
    printf ("Escolha uma opcao:");
    scanf ("%d", &opcao);


    switch (opcao) {
        case 1:
            printf ("plantas exoticas");
            break;
        case 2:
            printf ("plantas carnivoras");
            break;
        case 3:
            printf ("plantas nativas");
            break;
        case 4:
            printf ("plantas psicoativas");
            break;
        case 5:
            printf ("plantas medicinais");
            break;
        default:
            printf ("opcao invalido");
            break;
    }
    return 0;
}
