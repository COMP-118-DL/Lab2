/** \file Shapes.cpp
* \brief Collection of functions that draw shapes
* \details Contains DrawHorizontalLine, DrawVerticalLine, DrawSquare, DrawRectangle, DrawShapes
* \author Daniel Levin
* \version 1.0
* \date 04/03/2024
* \copyright GNU Public License.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

void drawHorizontalLine(int length, char ch) ;
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawRectangle(int height, int length, char ch);
void drawShapes();

int main() {

    srand(time(0));

    int userChoice;
    int size;
    int height, length;
    char ch;

    cout << "1) Draw a horizontal line" << endl;
    cout << "2) Draw a vertical line" << endl;
    cout << "3) Draw a square" << endl;
    cout << "4) Draw a rectangle" << endl;
    cout << "5) Fun" << endl;
    cout << "6) Exit" << endl;

    cout << "Enter your option: ";
    cin >> userChoice;

    switch (userChoice) {
        case 1:
            cout << "\nInput the length and character of the line:";
            cin >> size >> ch;
            drawHorizontalLine(size, ch);
            break;
        case 2:
            cout << "\nInput the height and character of the line:";
            cin >> size >> ch;
            drawVerticalLine(size, ch);
            break;
        case 3:
            cout << "\nInput the height and character of the square:";
            cin >> height >> ch;
            drawSquare(height, ch);
            break;
        case 4:
            cout << "\nInput the height, length and character of the rectangle:";
            cin >> height >> length >> ch;
            drawRectangle(height, length, ch);
            break;
        case 5:
            drawShapes();
            break;
        case 6:
            cout << "Goodbye!";
            break;
        default:
            cout << "Invalid option!";

    }

    return 0;
}

/**
 *  This function draws a horizontal line made of characters specified by the user
 *  @param ch character to draw the line with
 *  @param length length of the line
 */

void drawHorizontalLine(int length, char ch) {
    assert(length > 0 && length < 1000);
    cout << "Horizontal line (" << length << "," << ch << ")" << endl;

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;

}

/**
 *  This function draws a vertical line of characters specified by the user
 *  @param ch character to draw the line with
 *  @param height height of the line
 */

void drawVerticalLine(int height, char ch) {
    assert(height > 0 && height < 1000);

    cout << "Horizontal line (" << height << "," << ch << ")" << endl;

    for (int i = 0; i < height; i++) {
        cout << ch << endl;
    }
}

/**
 *  This function draws a square of a specified length and character
 * @param ch character to draw the square with
 * @param size size of the square
 */

void drawSquare(int size, char ch) {
    assert(size > 0 && size < 1000);
    cout << "Square (" << size << "," << ch << ")" << endl;

    for (int i = 0; i < size; i++) {
        cout << ch;
    }
    cout << endl;

    for (int i = 0; i < size - 2; i++) {
        cout << ch;
        for (int j = 0; j < size - 2; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << ch;
    }
}

/**
 *  This function draws a rectangle of a specified width and height made from a character
 *  @param ch character to draw the rectangle with
 *  @param height height of the rectangle
 *  @param length length of the rectangle
 */
void drawRectangle(int height, int length, char ch) {
    assert(height > 0 && height < 1000);
    assert(length > 0 && length < 1000);

    cout << "Rectangle (" << height << "," << length << "," << ch << ")" << endl;

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;

    for (int i = 0; i < height - 2; i++) {
        cout << ch;
        for (int j = 0; j < length - 2; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;
}

/**
 * This function draws a random number of random shapes
 *
 */
void drawShapes() {
    const int MAX_SHAPES = 10;

    for (int i = 0; i < MAX_SHAPES; i++) {
        int shape = rand() % 4 + 1;
        int size = rand() % 10 + 1;
        int height = rand() % 10 + 1;
        int length = rand() % 10 + 1;
        char ch = rand() % 126 + 33;

        switch (shape) {
            case 1:
                drawHorizontalLine(size, ch);
                break;
            case 2:
                drawVerticalLine(size, ch);
                break;
            case 3:
                drawSquare(height, ch);
                break;
            case 4:
                drawRectangle(height, length, ch);
                break;
        }
    }
}