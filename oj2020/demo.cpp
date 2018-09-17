#include <iostream>
#include <vector>
using std::vector;
static int _abs(int n) { return n > 0 ? n : -n; }
void InsertionSort(vector<int> & arr);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    vector<int> aList;
    int n, a;
    while (cin >> n) {
        if (n == 0) break;
        while(--n >= 0) {
            cin >> a;
            aList.push_back(a);
        }
        InsertionSort(aList);
        for (int i = 0; i < aList.size(); ++i) {
            if (i != 0) cout << ' ';
            cout << aList[i];
        } cout << endl;
        aList.clear();
    }

    return 0;
}

void InsertionSort(vector<int> & arr)
{
    for (int i = 1; i < arr.size(); ++i) {
        for (int j = i; j > 0; --j) {
            if (abs(arr[j]) > abs(arr[j - 1])) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
