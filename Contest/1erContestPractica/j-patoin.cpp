#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("./ascii.in");
    if (!inputFile) {
        cerr << "No se pudo abrir el archivo de entrada." << endl;
        return 1;
    }

    int h, w;
    inputFile >> h >> w;

    char ch;
    int val = 0;
    int slash_count = 0;
    int dot_count = 0;
    bool flag = false;
    int i = 0;
    int j = 0;

    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            inputFile >> ch;
            val = (int) ch;
            if (val == 47 || val == 92) {
                slash_count++;
                if (slash_count % 2 == 0) {
                    flag = false;
                } else {
                    flag = true;
                }
            } else if (val == 46 && flag == true) {
                dot_count++;
            } else {
                continue;
            }
        }
    }

    ofstream outputFile("./ascii.out");
    if (!outputFile) {
        cerr << "No se pudo abrir el archivo de salida." << endl;
        return 1;
    }

    outputFile << slash_count * 0.5 + dot_count << endl;

    return 0;
}