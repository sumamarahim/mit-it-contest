// Problem link: https://mitit.org/Contest/ViewProblem/mit-time?cid=beginner-2025

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<long long> limits = {5, 25, 125, 625, 3125, 15625, 78125, 390625, 1953125, 9765625, 48828125, 244140625, 1220703125};

    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        for (int k = 0; k < limits.size(); ++k) {
            if (N <= limits[k]) {
                if (k == 0) {
                    cout << "MIT time" << endl;
                } else {
                    cout << "MIT^" << k + 1 << " time" << endl;
                }
                break;
            }
        }
    }

    return 0;
}
