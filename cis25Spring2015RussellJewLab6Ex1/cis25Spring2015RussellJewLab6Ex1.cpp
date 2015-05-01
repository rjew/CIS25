/**
 * Program Name: cis25Spring2015RussellJewLab6Ex1.cpp
 * Discussion:   Menu Program
 * Written By:   Russell Jew
 * Date:         2015/05/01
 */

#include <iostream>
#include "cis25Spring2015FractionRussellJ.h"
#include "cis25Spring2015FractionRussellJUtility.h"
#include "cis25Spring2015CircleRussellJ.h"
#include "cis25Spring2015PointRussellJ.h"
#include "cis25Spring2015RectangleRussellJ.h"
using namespace std;

void displayInfo() {
    cout << "CIS 25 - C++ Programming" << endl;
    cout << "Laney College" << endl;
    cout << "Russell Jew" << endl << endl;
    cout << "Assignment Information --" << endl;
    cout << "  Assignment Number:  Lab 6," << endl;
    cout << "                      Exercise #1" << endl;
    cout << "  Written by:         Russell Jew" << endl;
    cout << "  Due Date:           2015/05/07" << endl << endl;
}

void displayMenu() {
    int option;

    FractionRussellJ* frPtr1 = nullptr;
    FractionRussellJ* frPtr2 = nullptr;
    FractionRussellJ* resultPtr = nullptr;

    do {
        cout << "**************************" << endl;
        cout << "*          MENU          *" << endl;
        cout << "*                        *" << endl;
        cout << "* 1. Initializing        *" << endl;
        cout << "* 2. Adding              *" << endl;
        cout << "* 3. Subtracting         *" << endl;
        cout << "* 4. Multiplying         *" << endl;
        cout << "* 5. Dividing            *" << endl;
        cout << "* 6. Printing            *" << endl;
        cout << "* 7. Quit                *" << endl;
        cout << "*                        *" << endl;
        cout << "**************************" << endl;

        cout << "Select an option (use integer value only) : ";
        cin >> option;
        cout << endl;

        switch (option) {
        case 1:
            cout << "  INITIALIZING Option --" << endl << endl;
            init(&frPtr1, &frPtr2);
            break;
        case 2:
            cout << "  ADDING Option --" << endl << endl;
            if (frPtr1 == nullptr) {
                cout << "    Not a proper call as no Fractions are available!\n" << endl;
            }
            else {
                do {
                    cout << "    ******************************" << endl;
                    cout << "    *      ADDING MENU           *" << endl;
                    cout << "    *                            *" << endl;
                    cout << "    * 1. add() - Member          *" << endl;
                    cout << "    * 2. add() - Stand Alone     *" << endl;
                    cout << "    * 3. operator+() - Member    *" << endl;
                    cout << "    * 4. Return to Previous MENU *" << endl;
                    cout << "    ******************************" << endl;

                    cout << "    Select an option (1, 2, 3, or 4): ";
                    cin >> option;
                    cout << endl;

                    switch (option) {
                    case 1:
                        cout << "      Calling member add()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(frPtr1->add(*frPtr2));
                        else
                            (*resultPtr) = frPtr1->add(*frPtr2);
                        cout << "        Fraction1 + Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 2:
                        cout << "      Calling stand alone add()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(add(frPtr1, frPtr2));
                        else
                            (*resultPtr) = add(frPtr1, frPtr2);
                        cout << "        Fraction1 + Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 3:
                        cout << "      Calling member operator+()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(*frPtr1 + *frPtr2);
                        else
                            (*resultPtr) = *frPtr1 + *frPtr2;
                        cout << "        Fraction1 + Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 4:
                        cout << endl;
                        break;
                    default:
                        cout << "      WRONG OPTION ...\n" << endl;
                    }
                } while (option != 4);
            }
            break;
        case 3:
            cout << "  SUBTRACTING Option --" << endl << endl;
            if (frPtr1 == nullptr) {
                cout << "    Not a proper call as no Fractions are available!\n" << endl;
            }
            else {
                do {
                    cout << "    *******************************" << endl;
                    cout << "    *      SUBTRACTING MENU       *" << endl;
                    cout << "    *                             *" << endl;
                    cout << "    * 1. subtract() - Member      *" << endl;
                    cout << "    * 2. subtract() - Stand Alone *" << endl;
                    cout << "    * 3. operator-() - Member     *" << endl;
                    cout << "    * 4. Return to Previous MENU  *" << endl;
                    cout << "    *******************************" << endl;

                    cout << "    Select an option (1, 2, 3, or 4): ";
                    cin >> option;
                    cout << endl;

                    switch (option) {
                    case 1:
                        cout << "      Calling member subtract()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(frPtr1->subtract(*frPtr2));
                        else
                            (*resultPtr) = frPtr1->subtract(*frPtr2);
                        cout << "        Fraction1 - Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 2:
                        cout << "      Calling stand alone subtract()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(subtract(frPtr1, frPtr2));
                        else
                            (*resultPtr) = subtract(frPtr1, frPtr2);
                        cout << "        Fraction1 - Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 3:
                        cout << "      Calling member operator-()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(*frPtr1 - *frPtr2);
                        else
                            (*resultPtr) = *frPtr1 - *frPtr2;
                        cout << "        Fraction1 - Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 4:
                        cout << endl;
                        break;
                    default:
                        cout << "      WRONG OPTION ...\n" << endl;
                    }
                } while (option != 4);
            }
            break;
        case 4:
            cout << "  MULTIPLYING Option --" << endl << endl;
            if (frPtr1 == nullptr) {
                cout << "    Not a proper call as no Fractions are available!\n" << endl;
            }
            else {
                do {
                    cout << "    *******************************" << endl;
                    cout << "    *      MULTIPLYING MENU       *" << endl;
                    cout << "    *                             *" << endl;
                    cout << "    * 1. multiply() - Member      *" << endl;
                    cout << "    * 2. multiply() - Stand Alone *" << endl;
                    cout << "    * 3. operator*() - Member     *" << endl;
                    cout << "    * 4. Return to Previous MENU  *" << endl;
                    cout << "    *******************************" << endl;

                    cout << "    Select an option (1, 2, 3, or 4): ";
                    cin >> option;
                    cout << endl;

                    switch (option) {
                    case 1:
                        cout << "      Calling member multiply()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(frPtr1->multiply(*frPtr2));
                        else
                            (*resultPtr) = frPtr1->multiply(*frPtr2);
                        cout << "        Fraction1 * Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 2:
                        cout << "      Calling stand alone multiply()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ(multiply(frPtr1, frPtr2));
                        else
                            (*resultPtr) = multiply(frPtr1, frPtr2);
                        cout << "        Fraction1 * Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 3:
                        cout << "      Calling member operator*()\n" << endl;
                        if (resultPtr == nullptr)
                            resultPtr = new FractionRussellJ((*frPtr1) * (*frPtr2));
                        else
                            (*resultPtr) = (*frPtr1) * (*frPtr2);
                        cout << "        Fraction1 * Fraction2 = ";
                        resultPtr->printFraction();
                        cout << endl;
                        break;
                    case 4:
                        cout << endl;
                        break;
                    default:
                        cout << "      WRONG OPTION ...\n" << endl;
                    }
                } while (option != 4);
            }
            break;
        case 5:
            cout << "  DIVIDING Option --" << endl << endl;
            if (frPtr1 == nullptr) {
                cout << "    Not a proper call as no Fractions are available!\n" << endl;
            }
            else {
                do {
                    cout << "    ******************************" << endl;
                    cout << "    *      DIVIDING MENU         *" << endl;
                    cout << "    *                            *" << endl;
                    cout << "    * 1. divide() - Member       *" << endl;
                    cout << "    * 2. divide() - Stand Alone  *" << endl;
                    cout << "    * 3. operator/() - Member    *" << endl;
                    cout << "    * 4. Return to Previous MENU *" << endl;
                    cout << "    ******************************" << endl;

                    cout << "    Select an option (1, 2, 3, or 4): ";
                    cin >> option;
                    cout << endl;

                    switch (option) {
                    case 1:
                        cout << "      Calling member divide()\n" << endl;
                        if (frPtr2->getNum() == 0)
                            cout << "        Cannot divide by zero!" << endl;
                        else {
                            if (resultPtr == nullptr)
                                resultPtr = new FractionRussellJ(frPtr1->divide(*frPtr2));
                            else
                                (*resultPtr) = frPtr1->divide(*frPtr2);
                            cout << "        Fraction1 / Fraction2 = ";
                            resultPtr->printFraction();
                        }
                        cout << endl;
                        break;
                    case 2:
                        cout << "      Calling stand alone divide()\n" << endl;
                        if (frPtr2->getNum() == 0)
                            cout << "        Cannot divide by zero!" << endl;
                        else {
                            if (resultPtr == nullptr)
                                resultPtr = new FractionRussellJ(divide(frPtr1, frPtr2));
                            else
                                (*resultPtr) = divide(frPtr1, frPtr2);
                            cout << "        Fraction1 / Fraction2 = ";
                            resultPtr->printFraction();
                        }
                        cout << endl;
                        break;
                    case 3:
                        cout << "      Calling member operator/()\n" << endl;
                        if (frPtr2->getNum() == 0)
                            cout << "        Cannot divide by zero!" << endl;
                        else {
                            if (resultPtr == nullptr)
                                resultPtr = new FractionRussellJ(*frPtr1 / *frPtr2);
                            else
                                (*resultPtr) = *frPtr1 / *frPtr2;
                            cout << "        Fraction1 / Fraction2 = ";
                            resultPtr->printFraction();
                        }
                        cout << endl;
                        break;
                    case 4:
                        cout << endl;
                        break;
                    default:
                        cout << "      WRONG OPTION ...\n" << endl;
                    }
                } while (option != 4);
            }
            break;
        case 6:
            cout << "  PRINTING Option --" << endl << endl;
            if (frPtr1 == nullptr) {
                cout << "    Not a proper call as no Fractions are available!\n" << endl;
            }
            else {
                do {
                    cout << "    ******************************" << endl;
                    cout << "    *      PRINTING MENU         *" << endl;
                    cout << "    *                            *" << endl;
                    cout << "    * 1. print() - Member        *" << endl;
                    cout << "    * 2. print() - Stand Alone   *" << endl;
                    cout << "    * 3. Return to Previous MENU *" << endl;
                    cout << "    ******************************" << endl;

                    cout << "    Select an option (1, 2, or 3): ";
                    cin >> option;
                    cout << endl;

                    switch (option) {
                    case 1:
                        cout << "      Calling member print()\n" << endl;
                        cout << "        Fraction 1: ";
                        frPtr1->printFraction();
                        cout << "        Fraction 2: ";
                        frPtr2->printFraction();
                        cout << endl;
                        break;
                    case 2:
                        cout << "      Calling stand alone print()\n" << endl;
                        print(frPtr1, frPtr2);
                        break;
                    case 3:
                        cout << endl;
                        break;
                    default:
                        cout << "      WRONG OPTION ...\n" << endl;
                    }
                } while (option != 3);
            }
            break;
        case 7:
            cout << "Having Fun ...!" << endl;
            break;
        default:
            cout << "  WRONG OPTION!\n" << endl;
        }
    } while (option != 7);

    delete frPtr1;
    delete frPtr2;
    delete resultPtr;
}

void init(FractionRussellJ** frPtr1Addr, FractionRussellJ** frPtr2Addr) {
    int num;
    int denom;
    int gcd;
    int option;

    do {
        cout << "    ******************************" << endl;
        cout << "    *      INITIALIZING MENU     *" << endl;
        cout << "    * 1. Set up Fractions        *" << endl;
        cout << "    * 2. Update Fractions        *" << endl;
        cout << "    * 3. Delete Fractions        *" << endl;
        cout << "    * 4. Return to Previous MENU *" << endl;
        cout << "    ******************************" << endl;
        cout << "    Select an option (1, 2, 3, or 4): ";
        cin >> option;
        cout << endl;

        switch (option) {
        case 1:
            if (*frPtr1Addr == nullptr) {

                cout << "    Enter num1: ";
                cin >> num;

                cout << "    Enter denom1: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom1 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                *frPtr1Addr = new FractionRussellJ(num, denom);

                cout << "    Enter num2: ";
                cin >> num;

                cout << "    Enter denom2: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom2 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                *frPtr2Addr = new FractionRussellJ(num, denom);

                cout << endl;
            }
            else {
                cout << "    Fraction1 and Fraction2 are already created!\n" << endl;
            }
            break;
        case 2:
            if (*frPtr1Addr != nullptr) {
                cout << "    Update num1: ";
                cin >> num;

                cout << "    Update denom1: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom1 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                gcd = getGCD(num, denom);

                (*frPtr1Addr)->setNum(num / gcd);
                (*frPtr1Addr)->setDenom(denom / gcd);

                cout << "    Update num2: ";
                cin >> num;

                cout << "    Update denom2: ";
                cin >> denom;

                while (denom == 0) {
                    cout << "    denom2 cannot be 0. Enter a non-zero integer: ";
                    cin >> denom;
                }

                if (denom < 0) {
                    denom = -denom;
                    num = -num;
                }

                gcd = getGCD(num, denom);

                (*frPtr2Addr)->setNum(num / gcd);
                (*frPtr2Addr)->setDenom(denom / gcd);

                cout << endl;
            }
            else {
                cout << "    No Fractions are available!\n" << endl;
            }
            break;
        case 3:
            if (*frPtr1Addr != nullptr) {
                delete *frPtr1Addr;
                *frPtr1Addr = nullptr;
                delete *frPtr2Addr;
                *frPtr2Addr = nullptr;
                cout << "    Fraction1 and Fraction2 have been deleted.\n" << endl;
            }
            else {
                cout << "    No Fractions to delete!\n" << endl;
            }
            break;
        case 4:
            cout << endl;
            break;
        default:
            cout << "      WRONG OPTION ...\n" << endl;
        }
    } while (option != 4);
}