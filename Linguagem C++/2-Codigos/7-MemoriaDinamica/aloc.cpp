#include <iostream>
#include <vector>

int main()
{
    std::vector<int> *vect;

    vect[0] = 5;
    vect[1] = 10;
    vect[2] = 23;

    for( auto n : vect )
    {
        std::cout << vect[n] << std::endl;
    }


    return 0;
}
