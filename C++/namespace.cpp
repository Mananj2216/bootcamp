#include <iostream>
using namespace std;
using namespace n2;
namespace n1 {
    int a = 5;
}

namespace n2 {
    int a = 4;
}

int main() {
    cout << n1::a+a;
    return 0;
}