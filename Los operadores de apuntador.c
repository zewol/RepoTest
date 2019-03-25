/*Usando los operadores & y * */
#include <stdio.h>
#include <stdlib.h>

main()
{
      int a, b;       /* a es un entero */
      int *aPtr;   /* aPtr es un apuntador a un entero*/
      
      a = 7;
      aPtr = &a;   /*aPtr set to address of a */
      b = &a;
      
      printf("%p\n\n", b);
      printf("%p\n\n", &aPtr);
      
      printf ("The address of a is %p\n"
              "The value of aPtr is %p\n\n", &a, aPtr);
              
      printf ("The value of a is %d\n"
              "The value of *aPtr is %d\n\n", a, *aPtr);
              
      printf ("Proving that * and & are complements of "
              "each other.\n&*aPtr = %p\n*&aPtr = %p\n",
              &*aPtr, *&aPtr);
  
  system("PAUSE");	
  return 0;
}
