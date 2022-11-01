#include <iostream>
using namespace std;

double radiusFunc () //no parameters needed bc getting argument from user.
{
   double userRadius;
    cout << "enter the radius of your circle: ";
    cin >> userRadius;
    return userRadius; //return value 1 is a user input
}

double squareRadius (double square) //we cannot run radius variable here bc it does not have scope in this function. 
{
    return square * square; //return value 2 is a user's radius squared.
}

int main ()
{
    const double PI = 3.14159;
    double radius; //will get from user.
    double area;
    radius = radiusFunc (); //return userRadius is stored in radius bc userRadius only has scope in radiusFunc.
    area = squareRadius (radius); //but we need to run the radius value in another function.
    cout << "your area is " << area;
    return 0;
}
