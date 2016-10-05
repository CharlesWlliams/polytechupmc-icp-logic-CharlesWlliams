#include <iostream>
#include "Atom.hh"
// #include "ExpNot.hh"
// #include "ExpAnd.hh"
// #include "ExpOr.hh"

using namespace std;

int main()
{
  
  /* Classe Atome */
  
  {
    Atom a(T);
    Atom b;
    Atom c(b);
    b = T;
    cout << a.toString() << endl;
    cout << b.toString() << endl;
    cout << c.toString() << endl;
    c = false;
    a = b = F;
    cout << a.toString() << endl;
    cout << b.toString() << endl;
    cout << c.toString() << endl;
    cout << a.evaluate() << endl;
  }

  /* Classe  ExpNot */
  // {
  //   Atom a(T);
  //   ExpNot n1(a);
  //   ExpNot n2(n1);
  //   cout << n1.toString() << endl;
  //   cout << n2.toString() << endl;
  //   cout << n2.evaluate() << endl;
  // }

  /* Classe ExpOr et ExpAnd */  
  // {
  //   Atom a(T);
  //   Atom b;
  //   Atom c(F);
  //   ExpNot n1(a);
  //   ExpAnd and1(n1,b);
  //   ExpAnd and2(c,b);
  //   ExpOr or1(and1,and2);
  //   cout << and1.toString() << std::endl;
  //   cout << or1.toString() << "=" << or1.evaluate() << endl;
  // }

  /* Plus d'opération */
  // {
  //   Atom a(U),b(U),c(U);
  //   ExpNot nota(a);
  //   ExpAnd and1(a , b);
  //   ExpAnd and2(nota , c);
  //   ExpAnd and3(b , c);
  //   ExpOr or1(and1,and2);
  //   ExpOr or2(or1,and3); 
  
  //   cout << or2.toString() << endl;
  
  //   while(or2 == U)
  //     {
  // 	if(a == U)
  // 	  {
  // 	    a = T;
  // 	    continue;
  // 	  }
  // 	if(b == U)
  // 	  {
  // 	    b = T;
  // 	    continue;
  // 	  }
  // 	if(c == U)
  // 	  {
  // 	    c = F;
  // 	    continue;
  // 	  }
  //     }
  //   cout << or2.toString() << endl;
  // }
}

