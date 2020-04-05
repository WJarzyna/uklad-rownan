#include "vect.hh"

class Matrix
{
  Vector V[SIZE];
public:
  
  const Vector operator [] (int arg) const { return V[arg]; }
  Vector& operator [] (int arg) { return V[arg]; }
};

std::ostream& operator << (std::ostream& str, const Matrix &A);
double det_sar(const Matrix &A);
