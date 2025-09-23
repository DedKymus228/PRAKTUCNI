#include <algorithm>
#include <iostream>
int main(){}
// Task 1
int Task1 () {
    int A;// данне число
    if (A % 2 == 0)
        A = A + 1;
    if (A % 2 == 1)
        A = A - 1;
    return 0;
}
// Task 2
int Task2 () {
    int A , B;
    if (A>=0 && B>=0)
        int mul = A * B;
    if (A<0 && B<0)
        int diff = A - B;
    return 0;
}
//Task 3
int Task3 () {
    int A , B;
    if (A == B)
        std::max(A,B);
    else std::cout <<"nyliovi" <<std::endl;
    return 0;
}
//Task 4
int Task4 () {
    int A;
    if (A > 0) {
        A = A + 1;
    }
    else if (A < 0) {
        A = A - 2;
    }
    else if (A == 0) {
        A = 10;
    }
    return 0;
}