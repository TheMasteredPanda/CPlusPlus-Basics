/**
 * Adds the functions of iostream to this file.
 */
#include <iostream>

/**
 * Allows you to call the methods within class std without using the operator scope..
 */
using namespace std;

/**
 * A class in C++. Methods with no access specifier, like the fields width and height, are automatically
 * recognised with a private access modifier.
 *
 * Within those modifiers you can specify members, such as data or function declarations. There are only
 * three access modifiers, private, public and protected. Any member that is assigned the private modifier
 * can only be accessed within the class and the classes 'friends'. Protected members are accessible from
 * other members of the same class, and their 'friends', but also from the members of the their derived
 * classes. Public members can be access outside of the class as well as inside of the class, as long as
 * the class object if visible.
 */
class Rectangle {
    int width, height;
public:
    void set_values(int, int);
    int area() {
        return width * height;
    }
} rect1;
/***
 * ^^^^^^^^^
 *
 * Declares an instance of this class to be used within this file and any other file including this file.
 */

/**
 * You can define functions outside of it's class, as well as inside of the access modifiers.
 * Methods with definitions are also called prototype.
 * @param x
 * @param y
 */
void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

/**
 * Main function, this function will always be in a C++ program somewhere, when you execute the
 * program this is what will be invoked no matter where it is located.
 * @return the exist process number.
 */
int rec_main() {
    Rectangle rect, rectangle;
    rect.set_values(3, 4);
    rectangle.set_values(5,7);
    rect1.set_values(5000, 5000);
    cout << "Area from instance rect: " << rect.area() << endl;
    cout << "Area from instance rectangle: " << rectangle.area() << endl;
    cout << "Area from instance rect1: " << rect1.area() << endl;
    return 0;
}