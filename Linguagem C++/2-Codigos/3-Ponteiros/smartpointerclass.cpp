#include <iostream>
#include <memory>
#include <string>


//usando smart pointers com classes
class Carro
{
    public:
        int vel=0;
        
        void setVel(int vel){
            this->vel = vel;
        }

        int getVel()
        {
            return vel;
        }
};


int main()
{
    //ponteiro para classe tradicional
    /*Carro *c1 = new Carro();
    std::cout << "Velocidade do carro: " << c1->getVel() << "\n";
    delete c1;*/

    //smart pointers shared, o c1 e o c2 estão compartilhando o mesmo ponteiro
    /*std::shared_ptr<Carro>c1(new Carro());    
    std::shared_ptr<Carro>c2 = c1;*/

    std::unique_ptr<Carro>c1(new Carro());
    std::unique_ptr<Carro>c2(new Carro());

    int velocidade;

    std::cout << "\nDigite a velocidade do carro c1: ";
    std::cin >> velocidade; 
    c1->setVel(velocidade);
    std::cout << "\nDigite a velocidade do carro c2: ";
    std::cin >> velocidade; 
    c2->setVel(velocidade);
    std::cout << "Velocidade do carro c1: " << c1->getVel() << "\n";
    std::cout << "Velocidade do carro c2: " << c2->getVel() << "\n";

    return 0;
}
