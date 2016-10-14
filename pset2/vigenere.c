/*****
* programm that encripts a string using vigenere cypher
* Shammah Agwor
* harvard CS50
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
    // make sure only one comandline z is giving;

    if(argc !=2 ) {
        printf("please only two arguement\n");
        return 1;
    }

    // also only alphabets is giving as command line arg
    for(int i=0; i<strlen(argv[1]); i++) {
        if(!isalpha(argv[1][i])) {
            printf("enter only alphabets\n");
            return 1;
        }
    }
    string wordToCypher=GetString(); //getb the word to encript

    int lengthOfWord=strlen(wordToCypher);


    char* key=argv[1];
    int lengthOfKey=strlen(argv[1]);


    for(int i=0,j=0; i<lengthOfWord; i++) { //the j variable helps us wait and not move to the next
        //ilteration for the key


        // if the words in the encripted test is not alphabet leave it untouch
        if(!isalpha(wordToCypher[i])) {
            printf("%c",wordToCypher[i]);



        }
        else {

            char  asciiCode=wordToCypher[i];
            int kval=toupper(key[j%lengthOfKey])-'A'; //stored ith world of th key and wrap around
            // do this for uppercase chars
            if(isupper(asciiCode)) {


                char lower =(asciiCode - 'A' + kval) % 26 + 'A';
                printf("%c", lower);
            }
            //dp this for lower case chars
            if(islower(asciiCode)) {
                char lower =(asciiCode - 'a' + kval) % 26 + 'a';
                printf("%c", lower);
            }




            j++;
        }

    }
    printf("\n");

    return 0;
}