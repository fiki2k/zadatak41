//Program treba naci ostatak i kolicnik pri dijeljenju 2 broja.

#include <stdio.h>
int main(){
   int br1, br2, quot, rem;

   printf("Unesi djeljenik: ");
   scanf("%d", &br1);

   printf("Unesi djelitelj: ");
   scanf("%d", &br2);

   /*  "/" Aritmeticki operator vraca kolicnik.
    
    */
   quot = br1 / br2;

   /* modulus operator "%" vraca ostatak nakon dijeljenja. 
    */
   rem = br1 % br2;

   printf("Kolicnik je: %d\n", quot);
   printf("Ostatak pri dijeljenju je: %d", rem);

   return 0;
}
