// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 03/1/22
// Description: Calculates the area and perimeter of a
// rectangle using user input

#include <bits/stdc++.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  // declaring variables
  int num1;
  int num2;
  int area;
  int peri;

  cout << "Make sure you only enter numbers!"<< endl << endl;
  // get user input
  cout << "What is the length of your rectangle?" << endl;
  cin >> num1;

  // get user input
  cout <<"What is the width/height of your rectangle?"<< endl;
  cin >> num2;

  // calculating
  area = num1 * num2;
  peri = (2 * num1) + (2 * num2);

  // output to user
  cout << "The area of your rectangle is " << area <<" cm^2"<< endl;
  cout << "The perimeter of your rectangle is " << peri << " cm"<< endl;
}
