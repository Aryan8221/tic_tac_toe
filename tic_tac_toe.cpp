#include<iostream>
using namespace std;

int main(){
    string a = "------------------------------- \n";
    string b ="|         |         |         |\n";
    string c ="|         |         |         |\n";
    string d ="|         |         |         |\n";
    string e ="|---------|---------|---------|\n";
    string f ="|         |         |         |\n";
    string g ="|         |         |         |\n";
    string h ="|         |         |         |\n";
    string i ="|---------|---------|---------|\n";
    string j ="|         |         |         |\n";
    string k ="|         |         |         |\n";
    string l ="|         |         |         |\n";
    string m ="-------------------------------\n";
    char character;
    int x;
    int y;
    while (true) {
        cout << "choose your char:(x or o) ";cin >> character;
        cout << "row:";cin >> x;
        cout << "column:";cin >> y;
        if (x == 1) {
            if (y == 1) {
                if (character == 'x') {
                    c[5] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (c[5] == 'X' and c[15] == 'X' and c[25] == 'X') {
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[5] == 'X' and g[15] == 'X' and k[25] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else if (c[5] == 'X' and g[5] == 'X' and k[5] == 'X'){
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    c[5] = 'O';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (c[5] == 'O' and c[15] == 'O' and c[25] == 'O') {
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[5] == 'O' and g[15] == 'O' and k[25] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else if (c[5] == 'O' and g[5] == 'O' and k[5] == 'O'){
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            if (y == 2) {
                if (character == 'x') {
                    c[15] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (c[5] == 'X' and c[15] == 'X' and c[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[15] == 'X' and g[15] == 'X' and k[15] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    c[15] = 'O';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (c[5] == 'O' and c[15] == 'O' and c[25] == 'O'){
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[15] == 'O' and g[15] == 'O' and k[15] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            if (y == 3) {
                if (character == 'x') {
                    c[25] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (c[5] == 'X' and c[15] == 'X' and c[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[25] == 'X' and g[15] == 'X' and k[5] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else if (c[25] == 'X' and g[25] == 'X' and k[25] == 'X'){
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    c[25] = 'O';;
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (c[5] == 'O' and c[15] == 'O' and c[25] == 'O'){
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[25] == 'O' and g[15] == 'O' and k[5] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else if (c[25] == 'O' and g[25] == 'O' and k[25] == 'O'){
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        if (x == 2) {
            if (y == 1) {
                if (character == 'x') {
                    g[5] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (g[5] == 'X' and g[15] == 'X' and g[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[5] == 'X' and g[5] == 'X' and k[5] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    g[5] = 'O';;
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (g[5] == 'O' and g[15] == 'O' and g[25] == 'O'){
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[5] == 'O' and g[5] == 'O' and k[5] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            if (y == 2) {
                if (character == 'x') {
                    g[15] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (g[5] == 'X' and g[15] == 'X' and g[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[15] == 'X' and g[15] == 'X' and k[15] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else if(c[25] == 'X' and g[15] == 'X' and k[5] == 'X'){
                        cout << "X win!!";
                        break;
                    }
                    else if(c[5] == 'X' and g[15] == 'X' and k[25] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    g[15] = 'O';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;

                    if (g[5] == 'O' and g[15] == 'O' and g[25] == 'O') {
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[15] == 'O' and g[15] == 'O' and k[15] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else if(c[25] == 'O' and g[15] == 'O' and k[5] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else if(c[5] == 'O' and g[15] == 'O' and k[25] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            if (y == 3) {
                if (character == 'x') {
                    g[25] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (g[25] == 'X' and c[15] == 'X' and k[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (g[5] == 'X' and g[15] == 'X' and g[25] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    g[25] = 'O';;
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (g[25] == 'O' and c[15] == 'O' and k[25] == 'O'){
                        cout<< "O win!!";
                        break;
                    }
                    else if (g[5] == 'O' and g[15] == 'O' and g[25] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        if (x == 3) {
            if (y == 1) {
                if (character == 'x') {
                    k[5] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (k[5] == 'X' and k[15] == 'X' and k[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[5] == 'X' and g[5] == 'X' and k[5] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    k[5] = 'O';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (k[5] == 'O' and k[15] == 'O' and k[25] == 'O'){
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[5] == 'O' and g[5] == 'O' and k[5] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            if (y == 2) {
                if (character == 'x') {
                    k[15] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (k[5] == 'X' and k[15] == 'X' and k[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[15] == 'X' and g[15] == 'X' and k[15] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    k[15] = 'O';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (k[5] == 'O' and k[15] == 'O' and k[25] == 'O'){
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[15] == 'O' and g[15] == 'O' and k[15] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            if (y == 3) {
                if (character == 'x') {
                    k[25] = 'X';
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (k[5] == 'X' and k[15] == 'X' and k[25] == 'X'){
                        cout<< "X win!!";
                        break;
                    }
                    else if (c[25] == 'X' and g[25] == 'X' and k[25] == 'X') {
                        cout << "X win!!";
                        break;
                    }
                    else if(c[5] == 'X' and g[15] == 'X' and k[25] == 'X'){
                        cout << "X win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                } else if (character == 'o') {
                    k[25] = 'O';;
                    cout << a;
                    cout << b;
                    cout << c;
                    cout << d;
                    cout << e;
                    cout << f;
                    cout << g;
                    cout << h;
                    cout << i;
                    cout << j;
                    cout << k;
                    cout << l;
                    cout << m;
                    if (k[5] == 'O' and k[15] == 'O' and k[25] == 'O'){
                        cout<< "O win!!";
                        break;
                    }
                    else if (c[25] == 'O' and g[25] == 'O' and k[25] == 'O') {
                        cout << "O win!!";
                        break;
                    }
                    else if(c[5] == 'O' and g[15] == 'O' and k[25] == 'O'){
                        cout << "O win!!";
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
    }

    return 0;
}