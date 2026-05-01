#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Input validation (PUT THIS HERE)
if (rows <= 0 || cols <= 0) {
    cout << "Invalid input. Rows and columns must be positive numbers." << endl;
    return 1;
}

    // Pattern (3 repeating emojis)
    string pattern[3] = {"🐸", "🌿", "🌸"};

    // Border emoji
    string border = "🐸";

    // Create 2D grid
    vector<vector<string>> garden(rows, vector<string>(cols));

    // Fill grid with repeating pattern
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            garden[i][j] = pattern[index % 3];
            index++;
        }
    }

    // Top border
    for (int j = 0; j < cols + 2; j++) {
        cout << border;
    }
    cout << endl;

    // Garden content with side borders
    for (int i = 0; i < rows; i++) {
        cout << border;

        for (int j = 0; j < cols; j++) {
            cout << garden[i][j];
        }

        cout << border << endl;
    }

    // Bottom border
    for (int j = 0; j < cols + 2; j++) {
        cout << border;
    }
    cout << endl;

    return 0;
}
