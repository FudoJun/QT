# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QTimerTest_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QTimerTest_autogen.dir/ParseCache.txt"
  "QTimerTest_autogen"
  )
endif()
