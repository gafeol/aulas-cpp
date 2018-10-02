#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int aleatorio = rand() % 100;
    cout << aleatorio << endl;
}