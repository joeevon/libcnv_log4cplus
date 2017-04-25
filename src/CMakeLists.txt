project(cnv_liblog4cplus)

list(APPEND SRC 
	cnv_liblog4cplus.cpp
    )

list(APPEND LIBS
	log4cplus
)

add_library(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} ${LIBS})
