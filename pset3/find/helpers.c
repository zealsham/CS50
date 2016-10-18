/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if(n<1){
        return false;
        
    }
    
    //binary search
    
     int start=0;  
     int end=n-1;
     while(start<=end){
         
         int mid=(start+end)/2;
         
         if(values[mid]==value){
             return true;
         }
         else if(value<values[mid]){
             
             end=mid-1;
         }
         else{
             start=mid+1;
         }
         
     }
     
     return false;
     
    
    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for(int k=0; k<n-1; k++){
        int checker=0;
         for(int i=0; i<n-k-1; i++){
             if(values[i]>values[i+1]){
                 int temp=values[i+1];
                 values[i+1]=values[i];
                 values[i]=temp;
                 checker=1;
             }
         }
         if(checker==0){break;}
    } 
    
}