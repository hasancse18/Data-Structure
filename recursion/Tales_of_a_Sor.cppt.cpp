#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int performOperations(vector<int>& a) {
    int operations = 0;

    while (!is_sorted(a.begin(), a.end())) {
        for (int i = 0; i < a.size(); i++) {
             a[i] = max(0, a[i] - 1);
        }
        operations++;
    }

    return operations;
}

int main() {

        int t;
        cin>>t;
        while(t--)
        {

            int n;
            cin >> n;

            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            int result = performOperations(a);
            cout << result << endl;
        }


    return 0;
}
