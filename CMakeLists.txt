cmake_minimum_required(VERSION 2.8)
set(ENGINE_NAME "learning-c-plus-plus")

# ┌──────────────────────────────────────────────────────────────────┐
# │  FLAGS                                                           │
# └──────────────────────────────────────────────────────────────────┘
# C++ 11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
# Linker
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework IOKit")

# ┌──────────────────────────────────────────────────────────────────┐
# │  Projects                                                        │
# └──────────────────────────────────────────────────────────────────┘

# A macro for creating a list of directories
# to use in a loop later
MACRO(SUBDIRLIST result curdir)
  FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
  SET(dirlist "")
  FOREACH(child ${children})
    IF(IS_DIRECTORY ${curdir}/${child})
      LIST(APPEND dirlist ${child})
    ENDIF()
  ENDFOREACH()
  SET(${result} ${dirlist})
ENDMACRO()

# Collect all subdirectories in this variable
SUBDIRLIST(SUBDIRS ${CMAKE_CURRENT_LIST_DIR})

# Loop through each directory, collect all the source files and create a target
foreach(subdir ${SUBDIRS})
  file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
  add_executable(${subdir} ${SOURCES})
endforeach()
