cmake_minimum_required(VERSION 3.20)

project(coding_practice_cpp_tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE CPP_TEST_FILES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/*_test.cpp"
)

foreach(test_file ${CPP_TEST_FILES})
    if(test_file MATCHES "^${CMAKE_SOURCE_DIR}/(build|node_modules|\\.pnpm-store|\\.git)/")
        continue()
    endif()

    file(RELATIVE_PATH test_rel_path "${CMAKE_SOURCE_DIR}" "${test_file}")
    string(REPLACE "/" "_" test_target "${test_rel_path}")
    string(REPLACE "." "_" test_target "${test_target}")
    string(REPLACE "-" "_" test_target "${test_target}")

    add_executable(${test_target} ${test_file})
    target_include_directories(${test_target} PRIVATE
        "${CMAKE_SOURCE_DIR}/include"
    )

    add_test(NAME ${test_target} COMMAND ${test_target})
endforeach()
