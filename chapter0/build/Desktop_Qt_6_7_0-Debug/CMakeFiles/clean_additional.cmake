# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/chapter0_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/chapter0_autogen.dir/ParseCache.txt"
  "chapter0_autogen"
  )
endif()
