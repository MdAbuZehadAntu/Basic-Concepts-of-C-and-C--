#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  try {
    int age;
    string name;
    cout<<"Enter Age : ";
    cin>>age;
    cout<<endl;

    //age=(int)age;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);

    }
  }
  catch (int myNum,string name) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum<<endl;

    //cout << "Name is: " << myName<<endl;

  }
  return 0;
}

