# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/coordinate_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/coordinate_autogen.dir/ParseCache.txt"
  "coordinate_autogen"
  )
endif()
