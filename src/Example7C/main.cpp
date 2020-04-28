#include "../O2FID/O2FID.h"

#include "headers.h"

#include <iostream>
#include <cmath>
#include "Eigen/SparseCore"

#define SPACER std::left << std::setw(20)




int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "            EXAMPLE 7 - O2FID            " << std::endl;
    std::cout << "-----------------------------------------" << std::endl;


    Point min = {-1., 0, 0};
    Point max = {1., 0, 0};

    int Nt = 51;
    auto Nx = {41, 81, 161};
    auto No = {0, 0, 0};

    Make (&min, &max, Nt, BackwardEuler1, Nx, No, No);
    Make (&min, &max, Nt, CrankNicolson, Nx, No, No);
    Make (&min, &max, Nt, BackwardEuler2, Nx, No, No);

    return 0;
}
