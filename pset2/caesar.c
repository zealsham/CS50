 /****
     * implementing caesar cypher in c
     * Shammah Agwor
     * harvard Cs50
     * please do not copy this code for your psets
     * ensure academic honesty
     * 2016
*/


#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char*  argv[]) {

    //check if exactly one arguement is given

    if(argc !=2) {

        printf("error\n");

        return 1;
    }


    // covert the given arguement to integer
    int k=atoi(argv[1]);




    string wordToCypher;

    // printf("enter text\n");

    wordToCypher=GetString(); //get the word to be cyphered from user

    int StringLength=strlen(wordToCypher);

    for(int i=0; i<StringLength; i++) {


        int asciiCode=wordToCypher[i]; //acII equivalent of each character

        char cyphered;



        // leave none alphabet alone,dont touch them
        if(!isalpha(wordToCypher[i])) {
            printf("%c",wordToCypher[i]);
        }
        //treat uppercase letter like this to ensure they remain upper
        if(isupper(wordToCypher[i])) {
            cyphered=(((asciiCode+k-65)%26)+65);

            printf("%c",cyphered);
        }
        //look up the comment above and replace the word "upper" with lower
        if(islower(wordToCypher[i])) {
            cyphered=(((asciiCode+k-97)%26)+97);
            printf("%c",cyphered);
        }



    }
    printf("\n");
    return 0;  //you shouldnt be reading this source if u dont understand this


}
