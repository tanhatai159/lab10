#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    srand(time(0));
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    int i = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get "<< grade[i]<<" in this 261102.";
    return 0;
}