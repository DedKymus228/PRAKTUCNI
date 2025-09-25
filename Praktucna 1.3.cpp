#include <iostream>

//Task1
int task1() {
    int A,B;
    int Mul = A * B;
    if (Mul < 0 )
        Mul = Mul * 2;
    else Mul = Mul *1.5;
}
//Task2
int Task2() {
    int A,B,C ;
    if (A<B+C)
        std::cout <<"e storonoy trukyntuka";
    else std::cout <<"a ne storonami trukytnuka";
    if (B<A+C)
        std::cout <<"e storonoy trukyntuka";
    else std::cout <<"b ne storonami trukytnuka";
    if (C<A+B)
        std::cout <<"e storonoy trukyntuka";
    else std::cout <<"c ne storonami trukytnuka";

    return 0;
}

