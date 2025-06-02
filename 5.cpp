#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char player_1[100], player_2[100];
    int pont1 = 0;
    int pont2 = 0;

    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Player 1: ");
    scanf("%s", &player_1);

    printf("Player 2: ");
    scanf("%s", &player_2);

    for(int i = 0; player_1[i] != '\0'; i++){
        if(isalpha(player_1[i])){
            int indice = toupper(player_1[i]) - 'A';
            pont1 = pont1 + POINTS[indice];
        }
    }

    for(int i = 0; player_2[i] != '\0'; i++){
        if(isalpha(player_2[i])){
            int indice = toupper(player_2[i]) - 'A';
            pont2 = pont2 + POINTS[indice];
        }
    }

    if(pont1 > pont2){
        printf("Player 1 ganhou!\n");
    } else if (pont1 < pont2) {
        printf("Player 2 ganhou!\n");
    } else {
        printf("Empate!");
    }

}
