//
// Created by Ivo Georgiev on 8/25/15.
//

#include "Point.h"
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double computeArea(Point*, Point*, Point*);

int main(void) {
    Point a,b,c;
    double x,y,z;

    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter the coordinates for point " << i+1 << " seperated by a space" << endl;
        cin >> x >> y >> z;
        if(i == 0)
        {
            a.setX(x);
            a.setY(y);
            a.setZ(z);
        }
        else if (i == 1)
        {
            b.setX(x);
            b.setY(y);
            b.setZ(z);
        }
        else
        {
            c.setX(x);
            c.setY(y);
            c.setZ(z);
        }
        cout << endl;
    }

    cout << setprecision(2) << "The area of your triangle is " << computeArea(&a, &b, &c) << endl;
    return 0;
}

double computeArea (Point* a, Point* b, Point* c)
{
    double D, E, F, S;
    D = a->distanceTo(b);
    E = a->distanceTo(c);
    F = b->distanceTo(c);
    S = (D + E + F) / (2);

    double area;
    area = sqrt(S*(S-D)*(S-E)*(S-F));
    return area;
}