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

class Da_thuc{
    private:
    std::shared_ptr<Node> head;
    public:
    Da_thuc(): head(nullptr){}
    //Nhập vào hệ số, bậc
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
    //Thiết lập biểu thức
    void insert(int heso, int bac){

        if(heso == 0) return;
        auto newNode = std::make_shared<Node>(heso, bac);
        if(!head || head ->b_ac < bac){
            newNode->next = head;
            head = newNode;
            return;
        }

        auto current = head;
        while(current -> next && current -> next -> b_ac > bac){
            current = current ->next;
        }

        if(current -> b_ac == bac){
            current -> he_so += heso;
            newNode -> next = current-> next;
            current -> next = newNode;
        }
    }
    //In ra màn hình
    void display(int heso, int bac){
        auto current = head;
        while(current){
            std::cout << current -> he_so << "x^" << current -> b_ac;
            current = current -> next;
            if(current) std::cout << "+"; 
        }
        std::cout << std::endl;
    }
    //Tính biểu thức
};
