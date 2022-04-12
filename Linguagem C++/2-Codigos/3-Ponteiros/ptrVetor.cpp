#include <iostream>


//ponteiro para vetor
int main()
{
    int i = 0;
    int j = 0;

    int v[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4];
    p = v;
    
  
    for( i = 0; i < 3; i++ ) 
    {
        for( j = 0; j < 4; j++ )
        {
        	std::cout << p[i][j] << std::endl;
        	std::cout << std::endl;
        }
    }

    return 0;
}
