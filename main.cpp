#include <iostream>

using namespace std;

int computeMe(int nn) {
    if (nn==0)
        return 1;
    if (nn==1)
        return 2;
    else
        return (2*computeMe(nn-1)+computeMe(nn-2))%999;
}

int main() {
    int param;
    cin >> param;
    cout << computeMe(param) << endl;
}