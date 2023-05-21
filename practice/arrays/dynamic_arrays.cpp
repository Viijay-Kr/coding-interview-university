#include <stdio.h>
#include <iostream>
using namespace std;

class Vector
{
private:
  int size;
  int capacity;
  int arr[2];

public:
  Vector(int size, int capacity)
  {
    size = size;
    capacity = capacity;
  }
  void push_back(int val)
  {
    arr[size] = val;
    this->size++;
  }
  int get_size()
  {
    return this->size;
  }
};

int main()
{
  Vector vect(0, 2);
  vect.push_back(1);
  int size = vect.get_size();
  cout << "Size of Array is :" << size << endl;
  return 0;
}