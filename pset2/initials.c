 /***
* A PROGRAMM TO PRINT OUT THE INITALS OF A GIVEN STRING IN UPPERCASE
* HARVARD cs50
* SHAMMAH AGWOR
* the logic is simple , ilterrate over the string as an array
* check if the element after a " " is uppercase, if so leave it
* if not change it to upper case
*/


#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main() {
    string nameInput;



    nameInput=GetString(); //get the string



    int firstCharUpper=nameInput[0]-32; //stores uppercase ascii code of the first sha

    //check if the first letter is upper case or not

    if(firstCharUpper<65) {
        printf("%c",nameInput[0]);
    }
    else {

        char upperChar=firstCharUpper; // convert the ascii code to char

        printf("%c",upperChar);

    }


    //illterate over the remaining element checking for element after a " "



    for(int i=0; i<(strlen(nameInput)); i++) {

        int ascii=nameInput[i+1];

        char cap=ascii;  //upper case the char


        if(nameInput[i]==' ') {

            //check if the ascii code already cap, if so leave it. else change it

            if(ascii<97) {
                printf("%c",cap);
            }
            else {

                int value=nameInput[i+1]-32; //uper case ascii code of thr next item after a space
                char word=value;              // char of what was explained above
                printf("%c",word);

            }
        }


    }

    printf("\n");

    return 0;


}
