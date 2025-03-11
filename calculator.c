#include "calculator.h"
#include <limits.h>

int add(int a, int b) { 
	return a + b;
}

int subtract(int a, int b) { 
	return a - b; 
}

int multiply(int a, int b) { 
	return a * b; 
}

int divide(int a, int b) {
    if (b != 0) {
  
      if (a == INT_MIN && b == -1) { // Resolves overflow case that hangs program
        return INT_MIN;
      } 
      else { // Typical cases
        return a / b;
      }
  
    } 
    else { // Resolves division by zero cases to zero
      return 0;
    }
}