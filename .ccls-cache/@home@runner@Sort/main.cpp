#include <iostream>
using namespace std;
void printArray(const int list[], int listSize);
int indexLargestElement(const int list[], int listSize);
int *insertX(int n, int arr[], int x, int pos);
void selectionSort(int list[], int length);
int main() {
  //read in amount of numbers
  int n;
  cin >> n;
  //throw away unless
  int C;
  cin >> C;
  const int ARRAY_SIZE = n;
  //make an array that fits the amount need
  int list[ARRAY_SIZE];
  int i;
  for (i = 0; i < ARRAY_SIZE; i++)
  cin >> list[ARRAY_SIZE];
  int listC[] = {list[i]};
  int lengthC = n;
  printArray(listC, lengthC);
  selectionSort(listC, lengthC);
  printArray(listC, lengthC);
  
  
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
int* insertX(int n, int arr[], int x, int pos)
{
    int i;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n; i < pos; i++)
        arr[i] = arr[i +1];
 
    // insert x at pos
    arr[pos + 1] = x;
 
    return arr;
}
void selectionSort(int list[], int length){
  int index, smallestIndex, loc, temp;

  for (index = 0; index < length-1; index++)
    {
      smallestIndex = index;

      for ( loc = index + 1; loc < length; loc++)
        {
          if (list[loc] < list[smallestIndex])
            smallestIndex = loc;
        }
      temp = list[smallestIndex];
      list[smallestIndex] = list[index];
      list[index] = temp;
    }
  
}