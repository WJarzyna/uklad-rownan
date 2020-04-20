#include <iostream>
#include <cmath>

#define SIZE 3

class Vector
{
  double x[SIZE];
  
public:
  Vector(); 
  const double operator [] (int arg) const { return x[arg]; }
  double& operator [] (int arg) { return x[arg]; }
 

};

std::ostream& operator << (std::ostream &str, const Vector &V);
std::istream& operator >> (std::istream &str, Vector &V); 
Vector operator + (const Vector A, const Vector B);
Vector operator - (const Vector A, const Vector B);
Vector operator * (const Vector A, const double mul);
double operator * (const Vector A, const Vector B);
Vector operator / (const Vector A, const double div);
double len(const Vector A);
