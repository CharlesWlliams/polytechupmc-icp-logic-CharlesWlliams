#include <iostream>

#include "PassGrid.h"
#include "Path.h"

using namespace std;

int main()
{
  PassGrid pg(6);
  pg.print();
  pg.reset();
  std::cout << std::endl;
  pg.print();
  
  Path c(6,4,5);
  c.print();
  cout<< pg.generate(c) << endl;
  
  pg.supress();
	
  c.supress();
  
}
