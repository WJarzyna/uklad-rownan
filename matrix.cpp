#include "matrix.hh"

std::ostream& operator << (std::ostream& str, const Matrix &A)
{
  for (int i=0; i<SIZE; i++) str<<A[i]<<'\n';
  return str;
}

double det_sar(const Matrix &A)
{
  return A[0][0]*A[1][1]*A[2][2]+A[0][1]*A[1][2]*A[2][0]+A[0][2]*A[1][0]*A[2][1]-A[2][0]*A[1][1]*A[0][2]-A[2][1]*A[1][2]*A[2][2]-A[2][2]*A[1][0]*A[1][2];
}
	  
