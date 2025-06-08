#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<int> prices;
int dayLimit = 5; // Default window size for analysis
vector<string> analysisHistory; // To store analysis history

// Utility function to get current timestamp
string getCurrentTimestamp() {
    time_t now = time(0);
    char buf[80];
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", localtime(&now));
    return buf;
}

// Function to add analysis to history
void addToHistory(const string& analysis) {
    analysisHistory.push_back(getCurrentTimestamp() + " - " + analysis);
}

// Function to enter stock prices
void inputPrices() {
int n;
    cout << "Enter number of days of stock data: ";
    cin >> n;
    if (n < 2) {
        cout << "You need at least 2 days of data.\n";
        return;
    }
    prices.clear(); // Reset previous data
    prices.resize(n);
    cout << "Enter " << n << " stock prices :\n";
    for (int i = 0; i < n; ++i) {
      cout << "Enter price "<<i+1<<": ";
        cin >> prices[i];
        cout<<endl;
        while (prices[i] < 0) {
            cout << "Price cannot be negative. Please enter a valid price: ";
            cin >> prices[i];
        }
    }
    int back;
    cout << "Enter 0 to go back to menu: ";
    cin >> back;
    while (back != 0) {
        cout << "Invalid input. Please enter 0 to return: ";
        cin >> back;
    }
    cout << "Returning to menu...\n";
    cout << "Stock data loaded successfully.\n";
    addToHistory("Loaded " + to_string(n) + " days of stock data");

}
// Function to calculate maximum profit
void calculateMaxProfit() {

    }
void InvestmentStrategy() {
}

// Function for price changes analysis
void PriceChanges() {
}

void changeDayLimit() {

}

// New function for Menu 6: Price Volatility Analysis
void priceVolatilityAnalysis() {

}


// Function to predict future prices using Floyd-Warshall algorithm (All Pairs Shortest Path)
void predict_nextprice() {

}


//  View Analysis History
void viewAnalysisHistory() {

}

// Main menu function
int main() {
    int choice;

    do {
        cout << "\nStock Market Analyzer\n";
        cout << "1. Load Stock Prices\n";
        cout << "2. Find Best Buy & Sell Days (Profit Maximizer)\n";
       cout << "3. Predict next price\n";

        cout << "4. Smart Price Changes (Portfolio Planner)\n";
        cout << "5. Compare Day-to-Day Price Changes (Correlation Finder)\n";
        cout << "6. Detect Longest Upward Trend (Trend Tracker)\n";
        cout << "7. Price Volatility Analysis\n";
        cout << "8. Change Analysis Range (Current: " << dayLimit << " days)\n";
        cout << "9. View Analysis History\n";
        cout << "10. Exit\n";
        cout << "Enter your choice (1-9): ";

        cin >> choice;

        switch (choice) {
            case 1: inputPrices(); break;
            case 2: calculateMaxProfit(); break;
            case 3: predict_nextprice(); break;
            case 4: InvestmentStrategy(); break;
            case 5: PriceChanges(); break;
            case 6: trendAnalysisBFS(); break;
            case 7: priceVolatilityAnalysis(); break;
            case 8: changeDayLimit(); break;
            case 9: viewAnalysisHistory(); break;
            case 10:
                cout << "Saving analysis history...\n";
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter 1-9.\n";
                cin.clear();
        }
    } while (choice != 9);

    return 0;
}
