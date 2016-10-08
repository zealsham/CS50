#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(){
    float input,cents;
    int counter=0;
    
  do{

    printf("O hai! How much change is owed?\n");
    
 
    input=GetFloat();
    
    }while(input<=0);
    cents=(int) round( input * 100);

    

     while(cents>=25){

       cents-=25;
       counter++;
     }

    while(cents>=10 && cents<25){

      cents-=10;
      counter++;
    }

    while(cents>=5 && cents<10){

        cents-=5;
        counter++;
    }

    while(cents>=1 && cents<5){

      cents-=1;
      counter++;
    }
    printf("%d\n",counter);
    return 0;
}