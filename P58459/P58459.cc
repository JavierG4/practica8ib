/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file  Sum of squares
  * @author Javier Gonzalez Brito alu0101548197@ull.edu.es
  * @date nov 2 2023
  * @brief that reads a natural number n, and prints the result of the following sum:
  * @bug There are no known bugs
  * @see hhttps://jutge.org/problems/P58153_en/submissions/S001
  */

#include <iomanip>
#include <iostream>
#include <cmath>

bool is_valid_date(int d, int m, int y) {
  bool bisiesto;
  if (y % 100 == 0) {
    if ((y / 100) % 4 == 0) { 
      bisiesto = true;
    }
    bisiesto = false;
  } 
  else {
    if (y % 4 == 0) { 
      bisiesto = true;
    }
    bisiesto = false;
  }

  if (d < 1 || m < 1 || y < 1800 || y > 9000 || m > 12 || d > 31) {
    return false;
  }
  if (bisiesto != 0 && m == 2 && d > 28) {
    return false;
  }  
  if (m == 2 && d > 29) {
    return false;
  }
  if ((m > 7 && m % 2 != 0 && d > 30) || (m <= 7 && m % 2 == 0 && d > 30)) {
    return false;
  }
  return true;
}

