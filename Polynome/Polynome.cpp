#include <iostream>
#include "Header.h"

using namespace std;



int main()
{

    double a = 0;
    double b = 0;
    double c = 0;
    /*
    cout << " donne A : ";
    cin >> a;
    cout << endl;

    cout << " donne B : ";
    cin >> b;
    cout << endl;

    cout << " donne C : ";
    cin >> c;
    cout << endl;
*/
    Polynome p1(11, 12, 4);
    //Polynome p2(11, 12, 4);

    p1.affichage();
   // p2.affichage();

    /*Polynome p3;

    p3 = p1 + p2;

    p3.affichage();
    */
    p1.Homothétie(1);

    p1.affichage();
    /*
    if (p1 == p2) {

        cout << "all g" << endl;

    }

    else
    {
        cout << "no " << endl;
    }
    */
}
