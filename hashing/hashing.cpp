#include<iostream>
#include<cmath>
using namespace std;
int enmap(char c){
    int res;
    switch(c){
        case 'a':
        case 'A': res = 1;
        break;
        case 'b':
        case 'B': res = 2;
        break;
        case 'c':
        case 'C': res = 3;
        break;
        case 'd':
        case 'D': res = 4;
        break;
        case 'e':
        case 'E': res = 5;
        break;
        case 'f':
        case 'F': res = 6;
        break;
        case 'g':
        case 'G': res = 7;
        break;
        case 'h':
        case 'H': res = 8;
        break;
        case 'i':
        case 'I': res = 9;
        break;
        case 'j':
        case 'J': res = 10;
        break;
        case 'k':
        case 'K': res = 11;
        break;
        case 'l':
        case 'L': res = 12;
        break;
        case 'm':
        case 'M': res = 13;
        break;
        case 'n':
        case 'N': res = 14;
        break;
        case 'o':
        case 'O': res = 15;
        break;
        case 'p':
        case 'P': res = 16;
        break;
        case 'q':
        case 'Q': res = 17;
        break;
        case 'r':
        case 'R': res = 18;
        break;
        case 's':
        case 'S': res = 19;
        break;
        case 't':
        case 'T': res = 20;
        break;
        case 'u':
        case 'U': res = 21;
        break;
        case 'v':
        case 'V': res =22;
        break;
        case 'w':
        case 'W': res = 23;
        break;
        case 'x':
        case 'X': res = 24;
        break;
        case 'y':
        case 'Y': res = 25;
        break;
        case 'z':
        case 'Z': res = 26;
        break;
    }
    return res;
}

int strhash(char *str, int n){

    long int res = 0;

    for(int i = 0 ; i < n; i++){
        res = res + pow(26,(n-(i+1)))*enmap(str[i]);
    }

    return res;

}


int main(int argc, char const *argv[])
{
    char s[] = "sainch";
    cout << strhash(s,6);
    return 0;
}

