#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void printMessage();
void readMessage();

void printMessage(char *message){

    printf("Output: \n\n");
    srand(time(0)); //Initializes random number seed
    for(int i = 0; i < strlen(message); i++){

        if(isalpha(message[i]) == 0){
            printf("%c", message[i]);
        }
        else{
            int ranInt = rand() % 2;
            if(ranInt == 1){
                printf("%c", toupper(message[i]));
            }
            else{
                printf("%c", tolower(message[i]));
            }
        }
    }
    printf("\n\n");
    readMessage();
}

void readMessage(){
    char message[1024];
    printf("Input: ");
    fgets(message, 1020, stdin); //scanf had formatting issues. Using this instead
    printMessage(message);
}

int main() {
  readMessage();
}
