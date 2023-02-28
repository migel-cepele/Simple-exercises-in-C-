#include<stdio.h>
long faktorial(int);
main()
{
int n;
long fact = 1;
printf("Jepni nje numer\n");
scanf("%d",&n);
printf("%d! = %ld\n", n, faktorial(n)); // thirrja e funksionit
return 0;
}
long faktorial(int n) // deklarimi i funksionit
{
int c;
long rezultat = 1;
for( c = 1 ; c <= n ; c++ )
rezultat = rezultat*c;
return ( rezultat );
}