/*
 * Problem: Quadrant Finder
 * Description: Read coordinates (x,y). Print which quadrant (I/II/III/IV) or which axis the point lies on.
 * Topic: Conditionals
 * Date: 2026-02-23 23:48
 */

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    if(x>0 && y>0) cout<<"Quadrant I";
    else if(x<0 && y>0) cout<<"Quadrant II";
    else if(x<0 && y<0) cout<<"Quadrant III";
    else if(x>0 && y<0) cout<<"Quadrant IV";
    else if(x==0 && y==0) cout<<"Origin";
    else if(x==0) cout<<"Y-axis";
    else cout<<"X-axis";
}