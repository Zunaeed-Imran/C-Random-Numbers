#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main(){
  long elapsedSeconds = time(0); // jan 1 1970
  srand(elapsedSeconds);
  int number = rand();
  cout << number;
  return 0;
}