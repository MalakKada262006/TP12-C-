#include <iostream>

class Vecteur2D {
private:
    double x;
    double y;

public:
    Vecteur2D(double x_val = 0.0, double y_val = 0.0) : x(x_val), y(y_val) {}

    Vecteur2D operator+(const Vecteur2D& autre) const {
        return Vecteur2D(x + autre.x, y + autre.y);
    }

    void afficher() const {
        std::cout << "Vecteur(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Vecteur2D v1(3.5, 2.0);
    Vecteur2D v2(1.5, 4.5);

    Vecteur2D v3 = v1 + v2;

    std::cout << "v1 = ";
    v1.afficher();

    std::cout << "v2 = ";
    v2.afficher();

    std::cout << "v1 + v2 = ";
    v3.afficher();

    return 0;
}
