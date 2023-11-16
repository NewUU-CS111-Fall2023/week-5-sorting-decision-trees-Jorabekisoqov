#include <iostream>
#include <vector>
#include <string>
using namespace std;

void rearrangeSoldiers(vector<string>& soldiers) {
    int n = soldiers.size();
    for (int i = 0; i < n - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}

int main() {
    vector<string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    rearrangeSoldiers(soldiers);
    for (const string& soldier : soldiers) cout << soldier << " ";
    cout << endl;
    return 0;
}
