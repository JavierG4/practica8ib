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

int number_of_digits(int n) {
  int i{1}; 
  if (n!=0){
	  i = (log10(n))+1;
  }
  return i;
}
