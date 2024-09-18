#include<vector>
#include<iostream>
using namespace std;

struct Item {
    int weight;
    int value;
    double ratio;
    int itemNum;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

double fractionalKnapsack(int capacity, vector<Item>& items) {
    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;
    int remainingCapacity = capacity;

    for (const Item& item : items) {
        if (remainingCapacity == 0)
            break;

        if (remainingCapacity >= item.weight) {
            totalValue += item.value;
            remainingCapacity -= item.weight;
            cout<<"Item: "<<item.itemNum<<" "<<item.value<<" taka"<<endl;
        } else {
            totalValue += (static_cast<double>(remainingCapacity) / item.weight) * item.value;
            cout<<"Item: "<<item.itemNum<<" "<<remainingCapacity*item.ratio<<" taka"<<endl;
            remainingCapacity = 0;
        }
    }

    return totalValue;
}

int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    int capacity;
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    vector<Item> items(n);
    cout << "Enter weight and value of each item:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> items[i].weight >> items[i].value;
        items[i].ratio = static_cast<double>(items[i].value) / items[i].weight;
        items[i].itemNum=i+1;
    }

    double maxValue = fractionalKnapsack(capacity, items);
    cout << "Maximum value in the knapsack: " << maxValue << endl;

    return 0;
}
/*
4
5
4 20
3 9
2 12
1 7
*/
