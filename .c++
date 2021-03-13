

#include<iostream>
//code by birat
#include<string.h>

using namespace std;

int main ()

{

char str[50], temp;

int i, j;//j is length of string.

cout << "Enter a string : ";
cin>>str;
cout<<str;


j = strlen(str) - 1;

while(i<j)

{

temp = str[i];

str[i] = str[j];

str[j] = temp;
i++;
j--;

}

cout << "\nReverse string : " << str;

return 0;

}




