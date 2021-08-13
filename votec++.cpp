#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
  int age;
    cout << "Enter age of a user:";
    cin>>age;

    if (age >= 18) {
        cout << "You are eligible for voting";
    } else {
        cout << "You are not eligible for voting";
    }

    

    return 0;
}   
   



   

