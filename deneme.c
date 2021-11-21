#include <stdio.h>
int main( )
{
int x;
for ( x = 1; x <= 100; x= x+ x%3 ) {
printf("%d : %d \n", x%3,x);

}
printf( "Donguden x == %d oldugunda cikildi.\n", x );
return 0;
}
