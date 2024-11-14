# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_cmake_modules_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED cmake_modules_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(cmake_modules_FOUND FALSE)
  elseif(NOT cmake_modules_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(cmake_modules_FOUND FALSE)
  endif()
  return()
endif()
set(_cmake_modules_CONFIG_INCLUDED TRUE)

# output package information
if(NOT cmake_modules_FIND_QUIETLY)
  message(STATUS "Found cmake_modules: 0.4.1 (${cmake_modules_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'cmake_modules' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${cmake_modules_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(cmake_modules_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "cmake_modules-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${cmake_modules_DIR}/${_extra}")
endforeach()
