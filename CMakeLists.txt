cmake_minimum_required(VERSION 3.14)

project(01UseEigenTest LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

include_directories(
  "C:\\Eigen\\eigen3_4_0"
)

add_executable(01UseEigenTest
  main.cpp
)
target_link_libraries(01UseEigenTest Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS 01UseEigenTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
