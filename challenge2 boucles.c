#include <unistd.h>
#include <stdio.h>

int yoyo(int nbr){
    int n = nbr;
    int z = 0;

    while (n > 1) {
        if (nbr % n == 0)
            z++;
        n--;
    }
    if (z != 1)
        return 0;
    else
        return 1;
}

int premier(int n){
    int hari = 0;
    int nombre = 3;


    while (nombre){
        if (yoyo(nombre)){
            hari++;
            if (hari == n) {
                return nombre;
            }
        }
        nombre++;
    }
}

int main(void){

    int ligne;
    int i = 1;
    int l = 1;
    printf("ligne :\n");
    scanf("%d", &ligne);

    int k = 0;
    int espc;

    while(i <= ligne){

        espc = (premier(ligne) - premier(i)) / 2;
        while (k < espc){
            printf(" ");
            k++;
        }
        k = 0;
        while (l <= premier(i)){
            printf("*");
            l++;
        }
        l = 1;
        printf("\n");
        i++;
    }





    return 0;
}
