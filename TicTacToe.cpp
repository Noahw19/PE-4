#include <iostream>

int** CreateBoard()
{
  int **arr = 0;
  arr = new int*[3];
  for(int i = 0; i < 3; i++)
  {
    arr[i] = new int[3];
    for(int y = 0; y < 3; y++)
    {
      arr[i][y] = -1;
    }
  }

   return arr;

}

void DisplayBoard(int **arr)
{
  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      if (arr[x][y] == 0)
      {
        std::cout << "O";
      } 
      else if (arr[x][y] == 1)
      {
        std::cout << "X";
      } 
      else 
      {
        std::cout << "T";
      }
      if (y != 2)
      {
        std::cout << "|";
      }
    }
    std::cout << "" << std::endl;
    if (x != 2)
    {
      std::cout << "--------";
    }
  }
}


int main()
{
  int **arr_ = CreateBoard();
  DisplayBoard(arr_);

}
