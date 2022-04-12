#include <iostream>
#include <vector>
#include <cmath>

//Calculando a distância entre dois pontos

struct point {
    float x;
    float y;
};


float distance(const struct point& p1, const struct point& p2)
{
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) +
                (p1.y - p2.y)*(p1.y - p2.y));
}


int main()
{
    std::vector <struct point> po;
    struct point p1; p1.x = 0; p1.y = 0;
    struct point p2; p2.x = 1; p2.y = 1;
    po.push_back(p1);
    po.push_back(p2);

    std::vector <struct point>::iterator ii;
    std::vector <struct point>::iterator jj;
    for (ii = po.begin(); ii != po.end(); ii++)
    {
        for (jj = po.begin(); jj != po.end(); jj++)
        {
            std::cout << distance(*ii,*jj) << "\n\n";
        }
    }
    return 0;
}

