#include <iostream>
#include <iterator>
#include <vector>

template <typename itertype>
void bubble_sort(itertype begin, itertype end)
{
  if(begin == end--)
  return;

  for (auto i = begin; i != end; i++)
	{
    if (*(i + 1) < *i)
    {
      std::iter_swap(i, i + 1);
    }
  }
  bubble_sort(begin, end--);
}
int main() 
{
  std::vector<int> array;
  for(int i = 0; i < 10; i++)
  {
    array.push_back(rand() % 100);
  }
 bubble_sort( array.begin(), array.end());
 
  for(int i = 0; i < array.size(); i++)
  { 
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}