#include "lineq.hh"

using std::cout;
using std::cin;

int main(void)
{
  lin_eq arr;
  cin>>arr.set_mat()>>arr.set_free();
  cout<<arr;
  if(!arr.solve())cout<<"Brak rozwiazan"<<'\n';
  else
    {
      cout<<"Rozwiazanie: "<<arr.get_sol()<<'\n'<<"Dl. wektora bledu: "<<arr.err()<<'\n';
    }
}
