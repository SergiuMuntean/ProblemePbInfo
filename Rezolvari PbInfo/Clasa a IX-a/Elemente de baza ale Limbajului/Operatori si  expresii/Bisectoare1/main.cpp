#include <iostream>

#include <cmath>  // sqrt

#include <iomanip>      // setprecision

using namespace std;

int main(){

//Declarare variabile (nr naturale)

double a,b,c;

double ba,bb,bc;

//Citire date

cin >> a >> b >> c;

//Calculare semiperimetru

double p=(a+b+c)/2;

//Verificare daca triunghiul este valid

 if((p < a) || (p < b) || (p < c)){

  cout << "Imposibil";

  return 0;

 }

//Calculare lungime bisectoare

ba = sqrt((4*b*c)/((b+c)*(b+c)) * p*(p-a));

bb = sqrt((4*a*c)/((a+c)*(a+c)) * p*(p-b));

bc = sqrt((4*a*b)/((a+b)*(a+b)) * p*(p-c));

//Pastrarea doar primelor 2 zecimale

int aux;

aux=ba*100;

ba=(double)aux/100;

aux=bb*100;

bb=(double)aux/100;

aux=bc*100;

bc=(double)aux/100;

//Afisarea rezultatului

cout << fixed << setprecision(2) << ba << " "  << bb << " " << bc;

}
