#include "matrix.hh"

using std::cout;

int main(void)
{
  Matrix U;
  U[0][2]=3;
  U[1][0]=2;
  U[2][1]=1;
  cout<<U<<'\n';
  cout<<det_sar(U);
}
