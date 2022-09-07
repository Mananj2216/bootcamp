#include <iostream>
using namespace std;
class Complex {
    private:
      int a,b;
    public:
        void setData(int x,int y) {
            a = x;
            b = y;
        }
    void showData() {
        cout << a << endl << b;
    }
};

int main() {
    Complex C1;
    C1.setData(12,4);
    C1.showData();
}