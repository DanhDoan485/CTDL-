#include<iostream>
#include<memory>
#include<cmath>

class Node{
    public:
    int he_so;
    int b_ac;
    std::shared_ptr<Node> next;

    Node(int heso, int bac): he_so(heso), b_ac(bac), next(nullptr) {}
};

class Polinomial{
    private:
    std::shared_ptr<Node> head;
    public:
    Polinomial(): head(nullptr){}

    void input(){
        int heso, bac;  
        char luachon;
        do{
        std::cout << "He so:"; std::cin >> heso;
        std::cout << "Bac"; std::cin>> bac;
        std::cout << "Ban co muon nhap them(y/n):";
        }
        while(luachon == 'y' || luachon == 'Y');
    }
};
