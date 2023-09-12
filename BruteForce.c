#include <stdio.h>
#include <string.h>

int main (){
    int senha, tentativa;
printf ("Digite sua senha numerica\n");
scanf ("%d", &senha);

for (tentativa=0;tentativa<senha;tentativa++){

    printf ("contagem do BruteForce: %i \n", tentativa);

}if(tentativa==senha){
    printf ("\n \n");

printf ("Sua senha descoberta e: %i", tentativa);
    printf ("\n \n");
}

return 0;
}
