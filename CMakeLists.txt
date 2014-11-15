cmake_minimum_required(VERSION 2.8.9)

# add all subdirectories
FILE (GLOB children RELATIVE "${curdir}" "${curdir}/*")
FOREACH(child ${children})
	IF (IS_DIRECTORY "${curdir}/${child}")
		add_subdirectory("${child}")
	ENDIF()
ENDFOREACH()
