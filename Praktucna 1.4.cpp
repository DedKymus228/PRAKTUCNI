#include <cmath>
#include <iostream>
using namespace std;

int Fib_n() {
    int n;
    cout << "vedit n" << endl;
    cin >> n;
    int F1 = 1, F2 = 1, Fn;
    int i = 2;

    if (n <= 2) {
        Fn = 1;
    }
    else {
        do {
            Fn = F1 + F2;
            F1 = F2;
            F2 = Fn;
            i++;
        } while (i <= n);
    }
    cout << "F" << n << " = " << Fn << endl;
    return 0;
}

//Task 2
int avarage() {
    int N;
    cout <<"vedit N" <<endl;
    cin >> N;

    int sum=0 , kol=0;
    for (int i=0;i < N;i++) {
        if (i%2==1) {
            sum+=i;
            kol++;
        }
    }
    int average = 0;
    average = sum / kol;
    cout << "average: " << average << endl;
}

//Task 3
int Sum_n () {
    double b1 , q;
    cout <<"vedit b1 , q " <<endl;
    cin >> b1 >> q ;
    int n ;
    cout <<"vedit n" <<endl;
    cin >> n ;

    double An = (b1 * (pow(q, n) - 1)) / (n * (q - 1));
    cout << "avarage: " << An << endl;
    return 0;
}

int main() {
     Fib_n ();
    // Sum_n ();
    // avarage();
    system("pause");
    return 0;
}