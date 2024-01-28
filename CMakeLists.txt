cmake_minimum_required(VERSION 3.5)

# Set the PROJECT_NAME, PROJECT_VERSION as well as other variable
project(cpp20_in_details
        LANGUAGES CXX C
        VERSION 1.0.0.0)

# Defines the CMAKE_INSTALL_LIBDIR, CMAKE_INSTALL_BINDIR and many other useful macros.
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
include(CMakeDependentOption)
include(CTest)

find_package(Threads)

# Control where libraries and executables are placed during the build.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")

# Disable C and C++ compiler extensions.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_EXTENSIONS OFF)

### Compile- and install-related commands.
add_subdirectory(CaseStudies)
add_subdirectory(Concurrency)
add_subdirectory(CoreLanguage)
add_subdirectory(Cpp23)
add_subdirectory(FeatureTesting)
add_subdirectory(Library)

