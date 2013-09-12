/**
  * Russell Folk
  * September 11, 2013
  *
  */

#include "permutation.h"

double perm ( int n , int r )
{
  return ( ( double ) lfact ( n ) ) / ( ( double ) lfact ( n - r ) ) ;
}
