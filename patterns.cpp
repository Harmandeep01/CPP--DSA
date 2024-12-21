#include <csetjmp>
#include <iostream>
using namespace std;

void pattern7(int n) {
  for (int i = 0; i < n; i++) {
    for (int space = 0; space < n - i - 1; space++) {
      cout << " ";
    }
    for (int stars = 0; stars < 2 * i + 1; stars++) {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern8(int n) {
  for (int i = 0; i < n; i++) {
    for (int space = 0; space < i; space++) {
      cout << " ";
    }
    for (int stars = 0; stars < (n * 2) - (2 * i + 1); stars++) {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern9(int n) {
  for (int i = 0; i < n; i++) {
    // Print leading spaces to center-align
    for (int space = 0; space < i; space++) {
      cout << " ";
    }
    // Print stars
    for (int star = 0; star < 2 * (n - i) - 1; star++) {
      cout << "*";
    }
    // for (int space = 0; space < i; space++) {
    //     cout << " ";
    // }
    // Move to the next line
    cout << endl;
  }
}
void pattern10(int n) {
  for (int i = 0; i < n; i++) {
    for (int space = 0; space < n - i - 1; space++) {
      cout << " ";
    }
    for (int star = 0; star < 2 * i + 1; star++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++) {
    for (int space = 0; space < i; space++) {
      cout << " ";
    }
    for (int star = 0; star < (2 * n) - 2 * i - 1; star++) {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern11(int n) {
  for (int i = 0; i < (2 * n); i++) {
    int stars;
    if(i < n){
        stars = i +1;
    }else{
        stars = 2 * n - i - 1;
    }
    for (int j = 0; j < stars; j++) {
        cout << "*";
    }cout << endl;
  }
}
void pattern12(int n){
   int start = 0;
  for(int i = 0; i<=n; i++){
   if(i%2 == 0){
    start = 0;
   }else start = 1;
   for(int j = 0; j < i; j++){
    cout << start;
    start = 1 - start;
   }cout << endl;
  }
}
void pattern13(int n){
  int space = 2 *(n);
  for(int i = 1; i <=n; i++){
    for(int j = 1; j < i+1; j++){
      cout << j;
    }
    for(int j = 1; j<space; j++){
      cout << " ";
    }
    for(int j = i; j >=1; j--){
      cout << j;
    }space-=2;
    cout << endl;
  }
}
void pattern14(int n){
  int start = 1;
  for (int i = 0; i <= n; i++) {
    for(int j = 1; j <= i; j++){
      cout << start << " ";
      start++;
    }cout << endl;
  }
}
void pattern15(int n){
  
  // for(int i = 0; i < n; i++){
  //   char ch = 'A';
  //   for(int j = 0; j <=i; j++){
  //     cout << ch;
  //     ch++;
  //   }cout << endl;
  // }
  //Another way
  // for(int i = 0; i < n; i++){
  //   for(char ch = 'A'; ch <= 'A' + i; ch++){
  //     cout << ch << " ";
  //   }cout << endl;
  // }
}
void pattern16(int n){
  for(int i = 0; i < n; i++){
    for(char ch = 'A'; ch < 'A' + n-i; ch++){
      cout << ch << " ";
    }cout << endl;
  }
}
void pattern17(int n){
  for(int i = 0; i < n; i++){
  // char ch = 'A';
  char ch = 'A' + i;
    for(int j = 0; j <= i; j++){
      cout << ch << " ";
    }cout << endl;
  }
}
void pattern18(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int spaces = 0; spaces < n - i - 1; spaces++) {
            cout << " ";
        }

        // Print characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << ch;
            if (j < breakpoint) {
                ch++; // Increment character for the left half and middle
            } else {
                ch--; // Decrement character for the right half
            }
        }

        // Move to the next line
        cout << endl;
    }
}
void pattern19(int n){
  char ch = 'A' + n - 1;
  for (int i = 0; i < n; i++) {
    // ch = 
    for(char c = ch ; c < i; c++){
      cout << c;
    }
    ch = ch -i;
    cout << endl;
  }
}
int main() {
    int n = 5;
    pattern19(n);
    return 0;
}
