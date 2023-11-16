/*
 * Author:Jo'rabek Isoqov
 * Date:
 * Name:Jo'rabek Isoqov
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool swapAdjacent(vector<string>& books, int i) {
    if (books[i] > books[i + 1]) {
        swap(books[i], books[i + 1]);
        return true;
    }
    return false;
}

void bubbleSort(vector<string>& books) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < books.size() - 1; i++) {
            if (swapAdjacent(books, i)) {
                swapped = true;
            }
        }
    }
}

int main() {
    vector<string> books = {"Catcher in the Rye", "Pride and Prejudice", "To Kill a Mockingbird", "The Great Gatsby", "Aobyfddfsgstg Dick"};

    bubbleSort(books);

    for (string book : books) {
        cout << book << endl;
    }


    return 0;
}