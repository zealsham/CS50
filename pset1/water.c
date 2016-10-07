#include <stdio.h>
#include <cs50.h>

int main(void) {
    int bathTime,bottles;
    float showerGallon,showerOunce;
    
    printf("minutes: ");
     bathTime=GetInt();
     
     showerGallon=bathTime*1.5;
     
     showerOunce=showerGallon*128;
     bottles=showerOunce/16;
     
     printf("bottles: %d",bottles);
     
     return 0;
    
}