#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fastdds::fast-discovery-server" for configuration "MinSizeRel"
set_property(TARGET fastdds::fast-discovery-server APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(fastdds::fast-discovery-server PROPERTIES
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/fast-discovery-serverm-1.0.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS fastdds::fast-discovery-server )
list(APPEND _IMPORT_CHECK_FILES_FOR_fastdds::fast-discovery-server "${_IMPORT_PREFIX}/bin/fast-discovery-serverm-1.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
