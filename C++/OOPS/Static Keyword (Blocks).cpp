#include<bits/stdc++.h>
using namespace std;


class Demo {
public:
    static int x;
};

int Demo::x = []() {
    cout << "Block 1\n";
    cout << "Block 2\n";
    return 0;
}();

int main() {
    return 0;
}