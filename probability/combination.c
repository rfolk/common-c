/**
  * Russell Folk
  * September 11, 2013
  *
  */

#include "permutation.h"

double comb ( int n , int r )
{
  return perm ( n , r ) / ( ( double ) fact ( r ) ) ;
}
