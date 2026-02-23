/*
 * Problem: BMI Calculator
 * Description: Read weight(kg) and height(m). Calculate BMI=w/h?. Classify: underweight/normal/overweight/obese.
 * Topic: Conditionals
 * Date: 2026-02-23 23:51
 */

#include <iostream>
using namespace std;

int main(){
    double w,h;
    cin>>w>>h;

    double bmi = w/(h*h);

    if(bmi<18.5) cout<<"Underweight";
    else if(bmi<25) cout<<"Normal";
    else if(bmi<30) cout<<"Overweight";
    else cout<<"Obese";
}