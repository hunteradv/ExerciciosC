#include <stdio.h>

int main ()
{
    int duck, contador;

    printf ("\nDigite quantos patinhos deseja que a mamae pata tenha: ");
    scanf ("%d", &duck);

    for (contador = duck; contador > 0; contador--)
    {
        if (contador > 1)
        {
            printf ( "\n %d patinhos foram passear. Alem das montanhas, para brincar. A mamae gritou: Qua, qua, qua, qua. Mas os %d patinhos voltaram de la.", contador, contador - 1);
        }
        else
        {
            printf ( "\n %d patinho foi passear. Alem das montanhas, para brincar. A mamae gritou: Qua, qua, qua, qua. Mas nenhum patinho voltou de la.", contador, contador - 1);
        }
    }

    printf ("\n \nA mamae patinha foi procurar. Alem das montanhas. Na beira do mar. A mamae gritou: Qua, qua, qua, qua. E os %d patinhos voltaram de la.", duck);
}