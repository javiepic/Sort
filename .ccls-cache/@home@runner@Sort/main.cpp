#include <iostream>
using namespace std;
void printArray(const int list[], int listSize);
int indexLargestElement(const int list[], int listSize);

int main() {
  int n;
  cin >> n;
  int C;
  cin >> C;
  const int ARRAY_SIZE = n;
  
  }
void printArray(const int list[], int listSize) {
  int index;

  for (index = 0; index < listSize; index++)
    cout << list[index] << " ";

  cout << endl;
  return;
}
int indexLargestElement(const int list[], int listSize)
{
  int maxIndex = 0;
  for (int index = 1; index < listSize; index++)
    {
      if (list[maxIndex] < list[index])
        maxIndex = index;
    }
  return maxIndex;
}