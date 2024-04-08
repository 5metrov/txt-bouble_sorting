#include <iostream>
#include <vector>
using namespace std;
#include <fstream>
#include <string>

void osn0() {
  vector<int> some_nums;

  ifstream in("nums.txt"); // окрываем файл для чтения
  if (in.is_open()) {
    int unum;
    while (!in.eof()) {
      in >> unum;
      some_nums.push_back(unum);
    }
  }
  in.close(); // закрываем файл
  int counter = -1;
  for (int a : some_nums) {
    cout << a << ' ';
    counter++;
  }
  cout << endl;
  for (int i = 0; i < some_nums.size(); i++) {
    for (int j = 0; j < some_nums.size() - 1; j++) {
      if (some_nums[j] > some_nums[j + 1]) {
        int temp = some_nums[j];
        some_nums[j] = some_nums[j + 1];
        some_nums[j + 1] = temp;
      } else {
        continue;
      }
    }
  }
  cout << "Наименьшее число - " << some_nums[0] << endl;
  cout << "Наибольшее число - " << some_nums[counter] << endl;
}
int main() {
  osn0();
  return 0;
}
