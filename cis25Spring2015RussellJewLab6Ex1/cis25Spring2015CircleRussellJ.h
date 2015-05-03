/**
 * Program Name: cis25Spring2015CircleRussellJ.h
 * Discussion:   Specification file for CircleRussellJ
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#ifndef CIRCLERUSSELLJ_H
#define CIRCLERUSSELLJ_H

#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"

class CircleRussellJ {
public:
    CircleRussellJ();
    CircleRussellJ(const CircleRussellJ&);

    ~CircleRussellJ();

    CircleRussellJ& operator=(const CircleRussellJ&);

    friend ostream& operator <<(ostream&, const CircleRussellJ&);
    friend istream& operator >>(istream&, CircleRussellJ&);
private:
    PointRussellJ c;
    FractionRussellJ r;
};

#endif 