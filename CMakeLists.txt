cmake_minimum_required(VERSION 3.10)

# Cài đặt tiêu chuẩn C++
set(CMAKE_CXX_STANDARD 14)

# Tìm OpenCV
find_package(OpenCV REQUIRED)

# Thêm tệp thực thi
add_executable(hello_world hello_world/hello_world.cpp)

# Liên kết thư viện OpenCV
target_link_libraries(hello_world ${OpenCV_LIBS})
