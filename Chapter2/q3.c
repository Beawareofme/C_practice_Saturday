# include <stdio.h>
int main( )
{
float a = 5, b = 2 ;
int c, d ;
c = a % b ;
d = a / 2 ;
printf ( "%d\n", d ) ;
return 0 ;
}

// error: invalid operands to binary % (have 'float' and 'float')
//     6 | c = a % b ;