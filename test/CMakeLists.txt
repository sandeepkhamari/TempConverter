# create an executable.
add_executable(test_temp_converter test_temp_converter.cpp)

# Dont need to use find_package as it is in the same build tree.

# Dont need to include bcoz it is already included publically to the linked library temp_conveter.
# include the installed include directory.
#target_include_directories(test_temp_converter PUBLIC ${CMAKE_INSTALL_INCLUDEDIR})

# link the source library(static)
target_link_libraries(test_temp_converter PRIVATE temp_converter)

# link the googletest libraries
target_link_libraries(test_temp_converter 
	              PUBLIC /usr/lib/libgtest.a 
		             /usr/lib/libgtest_main.a
)

# include ctest
include(CTest)
# enable testing.
include(GoogleTest)

# add tests to be discovered by CTest.
gtest_discover_tests(test_temp_converter)
