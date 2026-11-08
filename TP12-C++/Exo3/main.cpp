#include <iostream>
#include <stdexcept>

class Tableau {
private:
    int* data;
    int m_taille;

public:
    Tableau(int taille) : m_taille(taille) {
        if (taille <= 0) {
            throw std::invalid_argument("La taille du tableau doit etre superieure a 0.");
        }
        data = new int[m_taille]();
    }

    ~Tableau() {
        delete[] data;
    }

    int& operator[](int index) {
        if (index < 0 || index >= m_taille) {
            throw std::out_of_range("Index hors bornes !");
        }
        return data[index];
    }

    const int& operator[](int index) const {
        if (index < 0 || index >= m_taille) {
            throw std::out_of_range("Index hors bornes !");
        }
        return data[index];
    }

    int taille() const {
        return m_taille;
    }
};

int main() {
    try {
        Tableau t(5);

        for (int i = 0; i < t.taille(); ++i) {
            t[i] = (i + 1) * 10;
        }

        std::cout << "Contenu du tableau : ";
        for (int i = 0; i < t.taille(); ++i) {
            std::cout << t[i] << " ";
        }
        std::cout << "\n\n";

        std::cout << "Element a l'index 2 : " << t[2] << "\n\n";

        std::cout << "Tentative d'acces a l'index 10...\n";
        std::cout << t[10] << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Erreur capturee : " << e.what() << std::endl;
    }

    return 0;
}
