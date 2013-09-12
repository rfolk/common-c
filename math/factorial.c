/**
  * Russell Folk
  * September 11, 2013
  *
  */

#include "fact.h"

int fact ( int n )
{
  if ( n < 0 )
    return -1 ;
  if ( n < 1 )
    return 1 ;
  return n * fact ( n - 1 ) ;
}

long lfact ( int n )
{
  if ( n < 0 )
    return -1 ;
  if ( n < 1 )
    return 1 ;
  return n * lfact ( n - 1 ) ;
}
