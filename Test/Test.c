#include <stdio.h>

typedef void (*BarkFn) ();

typedef struct Dog{
   BarkFn bark;
}Dog;

void doggy_bark()
{
   printf("nom nom\n");
}

void husky_bark()
{
   printf("gau gau\n");
}

void main(void)
{
   Dog coho1 = {doggy_bark};
   Dog coho2 = {husky_bark};

   coho1.bark();
   coho2.bark();
   coho2.bark();
   coho1.bark();
      
   // printf("Hello World\n");
   // for(int i=0; i<10; i++)
   // printf("%d\n", i);
}