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
void pattern18(int n){
  for(int i = 0; i < n; i++){
    char ch = 'A';
    for(int spaces = 0; spaces < n - i -1; spaces++){
      cout << " ";
    }
    int breakpt = (2 * i + 1) / 2;
    for(int j = 0; j < 2 * i + 1;j++){
      if(j < breakpt)
      {
        cout << ch; 
        ch++;
      }else{
        cout << ch;
        ch--;
      }
      
    }cout << endl;
  }
}
void pattern19(int n){
  //My solution
  for(int i = 1; i <= n; i++){
    char ch = 'A' + n - i;
    for(int j = 0; j <i; j++){
      cout << ch << " ";
      ch++;
    }cout << endl;
  }
  //strivers solution
  for(int i = 0; i < n; i++){
    for(char ch = 'E' - i; ch <= 'E'; ch++){
      cout << ch << " ";
    }cout << endl;
  }
}
void pattern20(int n){
  for(int i = 0; i < n - 1; i++){
    //for stars
    for(int stars = 0; stars < n - i; stars++){
      cout << "* ";
    }
    //spaces
   for(int spaces = 0; spaces < i; spaces++){
    cout << "    ";
   }
    //for stars
    for(int stars = 0; stars < n - i; stars++){
      cout << " *";
    }
    if(i == 6){
    }else{
      cout << endl;
    }
  }

  //inverse pattern
  for(int i = 0; i <= n; i++){ 
    //for stars
    for(int stars = 0; stars < i; stars++){
      cout << "* ";
    }
    //spaces
   for(int spaces = 0; spaces < n-i; spaces++){
    cout << "    ";
   }
    //for stars
    for(int stars = 0; stars < i; stars++){
      cout << " *";
    } if(i == 8){
    }else{
      cout << endl;
    }
  }
}
void pattern21(int n){
  /*My Solution 
  int initial_space = 8; //8,6,4,2,0
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      cout << "*";
    }
    for(int spaces = 0; spaces < initial_space; spaces++){
      cout << " ";
    }
    for(int j = 0; j <= i; j++){
      cout << "*"; 
    }
    initial_space -= 2;
    cout << endl;
  }
  initial_space = 2;
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j <= n - i - 2; j++){
      cout << "*";
    }
    for(int spaces = 0; spaces < initial_space; spaces++){
      cout << " ";
    }
    for(int j = 0; j <= n - i - 2; j++){
      cout << "*"; 
    }
    initial_space += 2;
    cout << endl;
  }
  */

  /*Strivers Solution*/
  int initial_space = 2*n - 2;
  for(int i = 1; i < 2*n; i++){
    int stars = i;
    if(i > n) stars = 2*n -i;
    for(int j = 0; j < stars; j++){
      cout << "*";
    }
    for(int j = 0; j < initial_space; j++){
      cout << " ";
    }
    for(int j = 0; j < stars; j++){
      cout << "*";
    }
    cout << endl;
    if(i < n) initial_space -= 2;
    else initial_space += 2;
  }
}
void pattern22(int n){
  for(int i = 0; i < n; i++){
    int row = i;
    if(row == 0 || row == n-1){
      for(int j = 0; j < n; j++){
        cout << "*";
      }
    }else{
      for(int j = 0; j < n; j++){
        if(j == 0 || j == n - 1){
          cout << "*";
        }else{
          cout << " ";
        }
      }
    }cout << endl;
    row++;
  }
}
void pattern23(int n) {
    int size = 2 * n - 1; // Total size of the square pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Determine the value based on the minimum distance to an edge
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << n; // Print boundary value
            } else {
                int innerValue = n - min(min(i, j), min(size - i - 1, size - j - 1));
                cout << innerValue;
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    pattern23(n);
    return 0;
}
