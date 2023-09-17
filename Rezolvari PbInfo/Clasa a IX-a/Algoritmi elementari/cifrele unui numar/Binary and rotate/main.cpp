#include <iostream>
#include <cmath>

using namespace std;

int decimalToBinary(int decimal) {
    int binary = 0;
    int power = 0;
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * pow(10, power);
        decimal /= 2;
        power++;
    }
    return binary;
}

int binaryToDecimal(int binary) {
    int decimal = 0;
    int power = 0;
    while (binary > 0) {
        int remainder = binary % 10;
        decimal += remainder * pow(2, power);
        binary /= 10;
        power++;
    }
    return decimal;
}

int rotateBinaryRight(int binary, int numDigits) {
    int rotated = binary;
    int length = 0;
    while (rotated > 0) {
        rotated /= 10;
        length++;
    }
    numDigits %= length; // Ensure rotation within the valid range

    while (numDigits > 0) {
        int lastDigit = binary % 10;
        binary /= 10;
        binary = lastDigit * pow(10, length - 1) + binary;
        numDigits--;
    }

    return binary;
}

int main() {
    int decimalNumber, numDigits;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int binaryNumber = decimalToBinary(decimalNumber);

    cout << "Binary representation: " << binaryNumber << endl;

    cout << "Enter the number of digits to rotate right: ";
    cin >> numDigits;

    int rotatedBinary = rotateBinaryRight(binaryNumber, numDigits);

    cout << "Rotated binary: " << rotatedBinary << endl;

    int rotatedDecimal = binaryToDecimal(rotatedBinary);

    cout << "Rotated decimal: " << rotatedDecimal << endl;

    return 0;
}
