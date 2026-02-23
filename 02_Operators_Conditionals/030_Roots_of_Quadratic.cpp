/*
 * Problem: Roots of Quadratic
 * Description: Read a, b, c of ax?+bx+c=0. Find roots. Handle: two real, one real, complex roots.
 * Topic: Conditionals
 * Date: 2026-02-23 23:49
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;

    double d = b*b - 4*a*c;

    if(d>0){
        cout<<"Two real roots\n";
        cout<<(-b+sqrt(d))/(2*a)<<" "<<(-b-sqrt(d))/(2*a);
    }
    else if(d==0){
        cout<<"One real root\n";
        cout<<-b/(2*a);
    }
    else{
        cout<<"Complex roots\n";
        double real = -b/(2*a);
        double imag = sqrt(-d)/(2*a);
        cout<<real<<" + "<<imag<<"i , "<<real<<" - "<<imag<<"i";
    }
}