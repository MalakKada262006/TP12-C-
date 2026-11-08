#include <iostream>
#include <string>

class Produit {
private:
    std::string nom;
    double prix;
    int quantite;

public:
    Produit(const std::string& n, double p, int q)
        : nom(n), prix(p), quantite(q) {}

    friend std::ostream& operator<<(std::ostream& os, const Produit& p);
};

std::ostream& operator<<(std::ostream& os, const Produit& p) {
    os << "Produit : " << p.nom
       << " | Prix : " << p.prix << " DH"
       << " | Quantite en stock : " << p.quantite;
    return os;
}

int main() {
    Produit p1("Clavier Mecanique", 450.00, 12);
    Produit p2("Souris Sans Fil", 220.50, 25);

    std::cout << "--- Information sur les produits ---\n";
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    return 0;
}
