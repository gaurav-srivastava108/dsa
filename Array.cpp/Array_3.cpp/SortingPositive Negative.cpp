 #include <iostream>
#include <vector>
using namespace std;

void sort01m2(vector<int>& v) {
    int n = v.size();
    int nop = 1;  // 'nop' is used for positive values (you might want to choose appropriate names)
    int non = 0;  // 'non' is used for negative values

    // First count how many negative numbers are there in the array
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) non++;  // Count negative numbers
    }

    // Now rearrange the array
    for (int i = 0; i < n; i++) {
        if (i < non) {
            v[i] = -1;  // Place -1 in the first `non` positions (this should be the negative numbers)
        } else {
            v[i] = 1;   // Place 1 in the rest of the positions (this should be the positive numbers)
        }
    }
}

int main() {
    vector<int> v;
    v.push_back(-5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(-4);
    v.push_back(-2);
    v.push_back(1);

    // Printing the original vector
    cout << "Original array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sorting the array
    sort01m2(v);

    // Printing the rearranged vector
    cout << "Rearranged array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
