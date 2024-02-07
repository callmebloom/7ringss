#include <iostream>

double circle(double radius) {
    return 3.14 * radius * radius;
}
double ring(double outrad, double inrad) {
    double outarea = circle(outrad);
    double inarea = circle(inrad);
    return outarea - inarea;
}
int main() {
    setlocale(LC_ALL, "Rus");
    double outrad, inrad;
    std::cout << "введите внешний радиус кольца: ";
    std::cin >> outrad;
    std::cout << "введите внутренний радиус кольца: ";
    std::cin >> inrad;
    double ringarea = ring(outrad, inrad);
    std::cout << "площадь кольца получилась " << ringarea << std::endl;
    return 0;
}