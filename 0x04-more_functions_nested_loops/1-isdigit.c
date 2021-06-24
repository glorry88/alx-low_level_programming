#include "holberton.h"
/**
 * int _isdigit(int c) - check for digits 
 * Returns: 1 if digit and 0 if otherwise
 */
 int _isdigit(int c){
     return (c >= '0' && c <= '9');
 }