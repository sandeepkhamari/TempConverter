#include "../include/temp_converter.hpp"
#include <gtest/gtest.h>
#include <utility>

// Define a Test class.
class TestTempConverterCheck : public ::testing::TestWithParam<std::pair<double, double>> {};

// Parameterized test case to be reused.
TEST_P(TestTempConverterCheck, HandlesConvertionTests)
{
   auto [cels, faht]= GetParam();
   EXPECT_NEAR(celsius_to_fahrenheit(cels), faht, 0.01);
}

INSTANTIATE_TEST_SUITE_P(
   TempConverterTests,
   TestTempConverterCheck,
   ::testing::Values(
	   std::make_pair(40.0,  104.0),
	   std::make_pair(50.0,  122.0),
	   std::make_pair(100.0, 212.0),
	   std::make_pair(0.0,   32),
	   std::make_pair(23.0,  73.4)
   )
);


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
