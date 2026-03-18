#include <iostream>
using namespace std;
class cricketer {
	public:
    string name;
    void getCricketerData() {
        cout << "Enter cricketer name: ";
        cin >> name;
    }
    void displayCricketerData() {
        cout << "Cricketer Name: " << name << endl;
    }
};
class batsman : public cricketer {
public:
    int totalRuns;
    int innings;
    float averageRuns;
    int bestPerformance;
    void inputData() {
        getCricketerData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter number of innings: ";
        cin >> innings;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }
    void calculateAverage() {
        if (innings != 0)
            averageRuns = (float)totalRuns / innings;
        else
            averageRuns = 0;
    }
    void displayData() {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};
int main() {
    batsman b;
    b.inputData();
    b.calculateAverage();
    b.displayData();
    return 0;
}
