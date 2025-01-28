// Problem Link: https://mitit.org/Contest/ViewProblem/scoreboard-screenshots?cid=beginner-2025

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read N and K
    int N, K;
    cin >> N >> K;
    
    // Create a vector to store the screenshots along with their original indices
    vector<pair<vector<int>, int>> screenshots(N);
    
    // Read the screenshots
    for (int i = 0; i < N; i++) {
        screenshots[i].first.resize(K);
        for (int j = 0; j < K; j++) {
            cin >> screenshots[i].first[j];
        }
        screenshots[i].second = i + 1;  // Store the 1-based index
    }
    
    // Sort screenshots based on their scores (lexicographically)
    sort(screenshots.begin(), screenshots.end(), [](const pair<vector<int>, int>& a, const pair<vector<int>, int>& b) {
        return a.first < b.first;
    });
    
    // Check if the sorted order is valid
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (screenshots[i].first[j] < screenshots[i - 1].first[j]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    // If we reach here, we found a valid ordering
    cout << "YES" << endl;
    // Output the 1-based indices of the sorted screenshots
    for (int i = 0; i < N; i++) {
        cout << screenshots[i].second << " ";
    }
    cout << endl;
    
    return 0;
}
