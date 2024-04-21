# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/recycle_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/recycle_autogen.dir/ParseCache.txt"
  "recycle_autogen"
  )
endif()
