#include <stdio.h>
#include <cs50.h>

int main() {
    int userInput,i,space,hashes,check;

    do {
        printf("Height: ");

        userInput=GetInt();

        if(userInput==0) {
            return 0;
        }

    } while(userInput<1 || userInput>23);

    if(userInput==1) {

        printf("##\n");
    }

    else {

        space=userInput-2;

        hashes=userInput-space;
        check=1;

        while(check<=userInput) {

            for(i=0; i<space+1; i++) {

                printf(" ");

            }
            for( i = 0; i < hashes; i++) {
                printf("#");

            }

            printf("\n");
            hashes++;
            space--;
            check++;
        }

    }

    return 0;
}
