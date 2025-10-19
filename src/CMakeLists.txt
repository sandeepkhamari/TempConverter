# create a static library.
add_library(temp_converter STATIC temp_converter.cpp)
target_include_directories(temp_converter PUBLIC ${CMAKE_INSTALL_INCLUDEDIR})

# create an executable.
add_executable(temp_con main.cpp)
target_include_directories(temp_con PUBLIC ${CMAKE_INSTALL_INCLUDEDIR})
target_link_libraries(temp_con PRIVATE temp_converter)

# use standard directory names.
include(GNUInstallDirs)

# print the directory names.
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_INSTALL_LIBDIR: ${CMAKE_INSTALL_LIBDIR}")
message(STATUS "CMAKE_INSTALL_INCLUDEDIR: ${CMAKE_INSTALL_INCLUDEDIR}")
message(STATUS "CMAKE_INSTALL_BINDIR: ${CMAKE_INSTALL_BINDIR}")

# install the library.
install(TARGETS temp_converter EXPORT  temp_converterTarget
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

# install the executable.
install(TARGETS temp_con EXPORT temp_conTarget
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# install the header directory.
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
