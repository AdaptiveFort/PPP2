#include <iostream>
#include <vector>
using namespace std;

int main() {

    double min{0}, max{0}, distance, totalDistance {0};
    int count{0};
    char input;
    vector<double> distanceList;
    cout << "Please enter the distance in m between two cities..." << endl;

    while (cin >> input && input != 'q')
    {
        cin.unget();
        cin >> distance;
        if (count == 0)
        {
            min = distance;
            max = distance;
        }
        distanceList.push_back(distance);
        totalDistance = totalDistance + distance;
        if (distance > max)
        {
            max = distance;
        } else if (distance < min)
        {
            min = distance;
        }
        count ++;
    }

    cout << "Smallest distance = " << min << endl;
    cout << "Largest distance = " << max << endl;
    cout << "Mean distance = " << (totalDistance/count) << endl;
    cout << "List of all distances: " << endl;
    sort (distanceList.begin(), distanceList.end());
    for (int idx = 0; idx < distanceList.size(); idx++)
    {
        cout << distanceList[idx] << endl;
    }
    return 0;
}
