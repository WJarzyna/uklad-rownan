#include "vect.hh"

Vector::Vector()
{
  for (int i=0;i<SIZE;i++) x[i]=0;
}

std::ostream& operator << (std::ostream &str, const Vector &V)
{
  for(int i=0; i<SIZE; i++) str<<V[i]<<' ';
  return str;
}

std::istream& operator >> (std::istream &str, Vector &V)
{
  for(int i=0; i<SIZE; i++) str>>V[i];
  return str;
}


Vector operator + (const Vector A, const Vector B)
{
  Vector val;
  for (int i=0;i<SIZE;i++)  val[i]=A[i]+B[i];
  return val;
}

Vector operator - (const Vector A, const Vector B)
{
  Vector val;
  for (int i=0;i<SIZE;i++)  val[i]=A[i]-B[i];
  return val;
}

Vector operator * (const Vector A, const double mul)
{
  Vector val;
  for (int i=0;i<SIZE;i++)  val[i]=A[i]*mul;
  return val;
}


double operator * (const Vector A, const Vector B)
{
  double val=0;
  for (int i=0;i<SIZE;i++)  val+=A[i]*B[i];
  return val;
}
  
Vector operator / (const Vector A, const double div)
{
  Vector val;
  for (int i=0;i<SIZE;i++)  val[i]=A[i]/div;
  return val;
}

double len(const Vector A)
{
  return sqrt(A*A);
}
