#include "../include/temp_converter.hpp"

int main()
{
   double celsius= 40;
   std::cout<<celsius<<" celsius is "<<
	   celsius_to_fahrenheit(celsius)<< 
	   "fahrenheit."<<std::endl;
}
