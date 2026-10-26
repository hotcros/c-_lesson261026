#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    void setCoords(int newX, int newY) {
        x = newX;
        y = newY;
    }
    void print() {
        cout << "Point (" << x << ";" << y << ")";
    }
};
int main()
{
    Point p1;
    p1.setCoords(10, 25);
    p1.print();
}