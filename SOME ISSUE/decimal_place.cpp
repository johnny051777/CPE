/*輸入一個數字，四捨五入印出對應的小數點位置 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    double num;
    int n;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter decimal places: ";
    cin >> n;
    cout << fixed << setprecision(n);
    cout << "Result: " << num << endl;

    return 0;
}
