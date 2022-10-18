#include <stdio.h>
#include <stdlib.h> 
#include <cstdlib>

int main()
{
int x=0, y=0 ,senha=0;
printf("\n");
printf("digite uma senha de 4 algarismos \n(o robo nao sabera a senha)\n");
scanf ("%i",&x);
if (1000<=x<=9999)
{
printf("vou quebrar sua senha\n");
	senha=x;
	while (x!=y)
	{
	y++;
	}	
printf ("aqui esta sua senha %i", x);
}
if (100<=x<=999)
{
	printf("vou quebrar sua senha\n");
	senha=x;
	while (x!=y)
	{
	y++;
	}
printf ("aqui esta sua senha 0 %i",senha);
}
if (10<=x<=99)
{
printf("vou quebrar sua senha\n");
	senha=x;
	while (x!=y)
	{
	y++;
	}
printf ("aqui esta sua senha 00%i",senha);
}
if (0<x<=9)
{
	printf("vou quebrar sua senha\n");
	senha=x;
	while (x!=y)
	{
	y++;
	}
printf ("aqui esta sua senha 000%i",senha);
}
if (x=0)
{
printf ("aqui esta sua senha 0000");
}

return 0;
}