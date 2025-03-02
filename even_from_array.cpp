#include <iostream>
using namespace std;
int main()
{
  int t[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int size = sizeof(t)/sizeof(t[0]);
  for (size_t i = 0; i < size; i++)
  {
    if (t[i]%2==0)
    {
        cout<<t[i]<<endl;
    }
    
  }

  return 0;
}