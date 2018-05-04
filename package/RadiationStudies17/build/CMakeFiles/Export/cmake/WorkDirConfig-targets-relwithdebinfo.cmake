#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WorkDir::PixelAnalysisLib" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::PixelAnalysisLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::PixelAnalysisLib PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libPixelAnalysisLib.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libPixelAnalysisLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS WorkDir::PixelAnalysisLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_WorkDir::PixelAnalysisLib "${_IMPORT_PREFIX}/lib/libPixelAnalysisLib.so" )

# Import target "WorkDir::runPixelClusterAnalysis" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::runPixelClusterAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::runPixelClusterAnalysis PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/runPixelClusterAnalysis"
  )

list(APPEND _IMPORT_CHECK_TARGETS WorkDir::runPixelClusterAnalysis )
list(APPEND _IMPORT_CHECK_FILES_FOR_WorkDir::runPixelClusterAnalysis "${_IMPORT_PREFIX}/bin/runPixelClusterAnalysis" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
