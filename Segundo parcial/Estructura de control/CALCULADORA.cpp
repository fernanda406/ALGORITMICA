#include <iostream>

 using namespace std;

 int main()
  {

      int n1, n2, opc;
      float r;

      cout<< " 1.Suma " << endl;
      cout<< " 2.Resta " << endl;
      cout<< " 3.Multiplicacion " << endl;
      cout<< " 4.Divicion " << endl;
      cout<< " Opcion " << endl;
      cin>> opc;
      cout<< " Numero 1? " << endl;
      cin>> n1;
      cout<< " Numero 2? " << endl;
      cin>> n2;

      switch(opc)
       {

           case 1:{ r = n1 + n2;
                     cout<<" El resultado de la suma es: " << r << endl;
                     break;
                  }

           case 2:{ r = n1 - n2;
                    cout<< " El resultado de la resta es: " << r << endl;
                    break;
                  }

           case 3:{ r = n1 * n2;
                    cout<< " El resultado de la multiplicacion es: " << r << endl;
                    break;
                  }

           case 4:{ r = n1 / n2;
                    cout<< " El resultado de la divicion es: " << r << endl;
                    break;
                  }

       }

      return 0;

  }
