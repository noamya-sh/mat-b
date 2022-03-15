#include <iostream>
#include "mat.cpp"
#include "mat.hpp"
using namespace std;
using namespace ariel;
int main(){
    string str = "------------------------------------------";
    cout << str << endl
    << "  Welcome to the Noamya's carpet factory!  " << endl << str <<endl;
    int w, h;
    char f,s;
    int flag = 0;
    while (flag == 0){
        try {
            cout << endl << "Insert desired carpet width:" << endl;
            cin >> w;
            cout << "Insert desired carpet height:" << endl;
            cin >> h;
            cout << "Insert a character for first design style:" << endl;
            cin >> f;
            cout << "Insert a character for second design style:" << endl;
            cin >> s;
            cout << "We brought the carpet you wanted!" << endl << endl;

            string str = mat(w,h,f,s);
            cout << str << endl;
            flag = 1;
        }
        catch (exception& ex){
            cout << "caught exception: " << ex.what() << endl;
            cout << "If you want to try again - write 0, else, write 1 to exit" << endl;
            cin >> flag;
        }
    }


}