int** CreateBoard(int* arr[3][3])
{
  for(int i = 0; i < 3; i++)
  {
    for(int y = 0; y < 3; y++)
    {
      arr[i][y] = -1;
    }
    
   return arr;

}


int main()
{
  int arr_[3][3] = new int [][];
  arr_ = CreateBoard(arr_);
  

}
