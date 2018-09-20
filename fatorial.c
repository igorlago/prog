#include <stdio.h>
int main()
{
 int fat,n;
 printf("insira o seu numero para ser fatorado:");
 scanf("%d", &n);
 for(fat=1; n>1; n=n-1)
  {
   fat=fat*n;
    
  }
 printf("fatorial calculado:%d\n", fat);

 system("pause");
 return 0; 

}
