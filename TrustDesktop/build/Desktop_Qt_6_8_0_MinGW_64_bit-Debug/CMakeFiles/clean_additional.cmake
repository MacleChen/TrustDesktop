# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TrustDesktop_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TrustDesktop_autogen.dir\\ParseCache.txt"
  "TrustDesktop_autogen"
  )
endif()
