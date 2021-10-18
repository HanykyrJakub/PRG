#include <stdlib.h>
#include <stdio.h>
void generuj(int a1, int n, int d);
int main(){
 int n,a1,d;
    printf("Zadej 1.číslo:");
    scanf("%d",&a1);
    printf("Zadej Maximální číslo:");
    scanf("%d",&n);
    printf("Zadej diferenci mezi dvěma čísly:");
    scanf("%d",&d);
    while(a1<=n)
    {
     printf("%d ",a1);
     a1+=d;
    }
}    