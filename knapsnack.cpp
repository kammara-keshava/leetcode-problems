#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<float, int> p1, pair<float, int> p2) {
    return p1.first > p2.first;
}

int fractional_knapsack(vector<int> weights, vector<int> profits, int capacity) {
    int len = weights.size();
    int total_profit = 0;
    vector<pair<float, int> > ratio(len, make_pair(0.0, 0));

    for (int i = 0; i < len; i++) {
        ratio[i] = make_pair(profits[i] / (float)weights[i], i);
    }

    sort(ratio.begin(), ratio.end(), compare);

    for (int i = 0; i < len; i++) {
        if (capacity == 0) break;
        int index = ratio[i].second;
        if (weights[index] <= capacity) {
            capacity -= weights[index];
            total_profit += profits[index];
            cout << "Item " << index + 1 << " is selected fully." << endl;
        } else {
            int profit_to_consider = profits[index] * (float(capacity) / float(weights[index]));
            total_profit += profit_to_consider;
            cout<<endl;
            cout << "Fraction of Item " << index + 1 << " is selected." << endl;
            capacity = 0;
        }
    }

    return total_profit;
}

int main() {
    cout << "Enter the number of items: ";
    int n;
    cin >> n;

    vector<int> weights(n), profits(n);
    cout << "Enter the weights of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    cout << "Enter the profits of each item: ";
    for (int i = 0; i < n; i++) {
        cin >> profits[i];
    }

    cout << "Enter the capacity of the knapsack: ";
    int capacity;
    cin >> capacity;
    cout<<"Items that are selected:\n";
fractional_knapsack(weights, profits, capacity);
int k=fractional_knapsack(weights, profits, capacity);
    cout << "The maximum profit possible based on current list is: " << k << endl;

    return 0;
}
