#include <iostream>

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(int j = 1, int m = 1, int a = 2000) : jour(j), mois(m), annee(a) {}

    bool operator==(const Date& autre) const {
        return (jour == autre.jour) &&
               (mois == autre.mois) &&
               (annee == autre.annee);
    }

    bool operator!=(const Date& autre) const {
        return !(*this == autre);
    }

    void afficher() const {
        std::cout << (jour < 10 ? "0" : "") << jour << "/"
                  << (mois < 10 ? "0" : "") << mois << "/"
                  << annee;
    }
};

int main() {
    Date d1(17, 8, 2025);
    Date d2(19, 6, 2025);
    Date d3(25, 11, 2025);

    std::cout << "d1 : "; d1.afficher(); std::cout << "\n";
    std::cout << "d2 : "; d2.afficher(); std::cout << "\n";
    std::cout << "d3 : "; d3.afficher(); std::cout << "\n\n";

    if (d1 == d2) {
        std::cout << "d1 et d2 sont identiques.\n";
    } else {
        std::cout << "d1 et d2 sont differentes.\n";
    }

    if (d1 != d3) {
        std::cout << "d1 et d3 sont differentes.\n";
    } else {
        std::cout << "d1 et d3 sont identiques.\n";
    }

    return 0;
}
