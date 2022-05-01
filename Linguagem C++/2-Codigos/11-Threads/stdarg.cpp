#include <stdio.h>
#include <stdarg.h>

//passar um numero indefinido de parametros para uma função

int parametros( int p_qtde, ... )
{
    int i;
    char * nome;

    va_list vl;
    
    va_start( vl, p_qtde );
    
    for ( i=0; i<p_qtde; i++ )
    {
    
      nome = va_arg( vl, char * );
      
      printf ("%s\n", nome );
    }

    va_end(vl);
    
    printf ("\n");

}
int main()
{
    parametros( 3, "Wagner", "Marcuci", "final" );

    printf( "fim.\n" );

    printf( "\n\n" );
    return 0;
}
