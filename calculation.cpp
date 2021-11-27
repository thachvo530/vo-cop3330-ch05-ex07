#include <iostream>
#include <math.h>
#include "header.h"

using namespace std;

void calculate(double a, double b, double c)
{

    double discriminant = (double)((b * b) - 4*(a*c));
    

    if (discriminant < 0)
    {
        cout << "No real roots";
    }

    else{

        cout << "The roots are " << (double)(((0 - b) + sqrt(discriminant))) / (2*a) << " and " << (double)(((0 - b) - sqrt(discriminant)) / (2*a));
    }

}

