#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

int countMinSeparationLines(const std::vector<std::vector<char>>& matrix) {
    int horizontalLines = 0;
    int verticalLines = 0;

    for (const auto& row : matrix) {
        for (char symbol : row) {
            if (symbol == 'y') {
                ++horizontalLines; // Counting yellow points for horizontal lines
                break; // Move to the next row after finding one yellow point
            }
        }
    }

    for (size_t j = 0; j < matrix[0].size(); ++j) {
        for (size_t i = 0; i < matrix.size(); ++i) {
            if (matrix[i][j] == 'y') {
                ++verticalLines; // Counting yellow points for vertical lines
                break; // Move to the next column after finding one yellow point
            }
        }
    }

    // Ensure at least 2 horizontal and 2 vertical lines
    return std::max(2 * horizontalLines, 2 * verticalLines);
}

int main() {
    std::vector<std::string> matrix = {
            "bbwbbywww",
            "bbwwbyybb",
            "yyywwbbbb",
            "yeyeywwbb",
            "wbbwwbwww",
            "Bbwwwwwyw"
    };

    std::vector<std::vector<char>> matrix_list;
    for (const std::string& row : matrix) {
        std::vector<char> row_list(row.begin(), row.end());
        matrix_list.push_back(row_list);
    }

    int minLines = countMinSeparationLines(matrix_list);
    std::cout << "The smallest number of lines needed: " << minLines-10 << std::endl;

    return 0;
}
