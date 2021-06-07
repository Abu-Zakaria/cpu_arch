#include <iostream>
#include "src/m.hpp"

using namespace std;

int main()
{
    M m;
    bool i = 1;
    bool s = 1;

    m.setI(i);
    m.setS(s);

    m.init();

    bool result = m.get();

    cout << "Answer : " << result << "\n";

    m.setS(0);

    result = m.get();
    cout << "Answer : " << result << "\n";

    m.setI(0);

    result = m.get();
    cout << "Answer : " << result << "\n";

    return 0;
}