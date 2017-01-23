#include <iostream>

using namespace std;

int computeMe(int nn) {
    if (nn==0 || nn==1)
        return 1;
    else
        return (3*computeMe(nn-1)+computeMe(nn-2))%1000;
}

int main() {
    int param;
    cin >> param;
    cout << computeMe(param) << endl;
}