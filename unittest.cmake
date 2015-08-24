set (EXECUTE_COMMAND $(TEST) $(ARGS))
execute_process( COMMAND ${EXECUTE_COMMAND) TIMEOUT 10 RESULT_VARIABLE RESULT_CODE OUTPUT_VARIABLE RESULT_OUTPUT ERROR_VARIABLE RESULT_OUTPUT )
message( STATUS "${RESULT_OUTPUT}" )
file( WRITE ${RESULT_FILE} ${RESULT_OUTPUT} )
if ( NOT RESULT_CODE EQUAL 0 )
  file( REMOVE ${TEST} )
endif()

get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
 message(STATUS "${_variableName}=${${_variableName}}")
endforeach()
