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
    else if (B<A+C)
        std::cout <<"e storonoy trukyntuka";
    else if (C<A+B)
        std::cout <<"e storonoy trukyntuka";
    else std::cout <<" e storonami trukytnuka";
    return 0;//тут на самом деле правильнее было сделать иф для каждого значения
}

