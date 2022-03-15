#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace ariel {
    string mat(int w, int h, char f, char s) {
        if (w % 2 == 0 || h % 2 == 0) {
            throw invalid_argument("Mat size is always odd");
        }
        if (w < 0 || h < 0) {
            throw invalid_argument("Mat size is always positive");
        }
        if ( f< '!' || f> '~' || s< '!' || s> '~' ){
            throw invalid_argument("Broken carpet");
        }

        string str;

        vector<vector<char>> mat (h,vector<char>(w)) ;
//        char mat[h][w];

        int col = 0;
        int row = 0;
        int type = 0;
        char c = 0;
        while (col <= w / 2 && row <= h / 2) {
            if (type % 2 == 0) { c = f; }
            else { c = s; }
            for (int i = col; i < w - col; ++i) {
                mat[row][i] = c;
                mat[h - 1 - row][i] = c;
            }
            for (int i = row; i < h - row; ++i) {
                mat[i][col] = c;
                mat[i][w - 1 - col] = c;
            }
            col++;
            row++;
            type++;
        }
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                str += mat[i][j];
            }
            str += '\n';
        }
        return str;
    }
}

//int main() {
//    cout << ariel::mat(51, 17, 'A', 'H') << endl;
//}