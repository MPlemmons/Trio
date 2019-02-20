#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//function initializations
void sortDescending(int,int,int);
void swap(int&,int&);

int main()
{
  //initialize variables
  int numA, numB, numC;
  //ask for user input
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  //sort the 3 numbers in descending order
  sortDescending(numA, numB, numC);
  
  return 0;
}

void sortDescending(int first, int second, int third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }

  //print out descending
  cout<<"From greatest to least, they are: ";
  cout<<first<<","<<second<<","<<third<<endl;
}

void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
