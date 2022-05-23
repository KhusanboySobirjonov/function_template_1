#include <iostream>
#include <cmath>
using namespace std;
template <class T> float Power (T A , T B) {
    T result;
    result = pow(A , B);
    return result;
}
template <class T> Power2 (T A , T N) {
    T result_1;
    if (N == 0) {
        result_1 = 1;
    }
    if (N > 0) {
        result_1 = pow(A , N);
    }
    if (N < 0) {
        result_1 = 1 / (pow(A , N));
    }
    return result_1;
}
template <class T> float Power3 (T A , T N) {
    T result_2;
    int a=N;
    if (N-a != 0) {
        result_2 = Power<float>(A , N);
    }
    else {
        result_2 = Power2<float>(A , N);
    }
    return result_2;
}
int main() {
    float A, N, M, K;
    cout << "Enter the number 1 : ";
    cin >> A;
    cout << "Enter the number 2 : ";
    cin >> N;
    cout << "Enter the number 3 : ";
    cin >> M;
    cout << "Enter the number 4 : ";
    cin >> K;
    cout << "Result :\n";
    cout << Power3 <float> (A , N) << endl;
    cout << Power3 <float> (A , M) << endl;
    cout << Power3 <float> (A , K) << endl;
    return 0;
}
