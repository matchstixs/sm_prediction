#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELEASE".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gandiva_shared" for configuration "RELEASE"
set_property(TARGET gandiva_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gandiva_shared PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libgandiva.so.400.0.0"
  IMPORTED_SONAME_RELEASE "libgandiva.so.400"
  )

list(APPEND _IMPORT_CHECK_TARGETS gandiva_shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_gandiva_shared "${_IMPORT_PREFIX}/lib/libgandiva.so.400.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)