SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

link_directories(
    ${PROJECT_BINARY_DIR}/lib
)

ADD_LIBRARY(sumeragi STATIC
  sumeragi.cpp
)
target_link_libraries(sumeragi
  peer_service_with_json
  signature
  event_repository
  objects
)