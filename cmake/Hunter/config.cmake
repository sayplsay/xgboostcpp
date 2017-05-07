set(XGBOOST_CMAKE_ARGS
  XGBOOST_USE_HALF=ON
  XGBOOST_USE_BOOST=ON
  XGBOOST_DO_LEAN=ON
  XGBOOST_ADD_TO_STRING=${XGBOOSTER_ADD_TO_STRING}
  XGBOOST_USE_BOOST=${XGBOOSTER_SERIALIZE_WITH_BOOST}
  XGBOOST_USE_CEREAL=${XGBOOSTER_SERIALIZE_WITH_CEREAL}
  )

if(ANDROID)
  list(APPEND XGBOOST_CMAKE_ARGS XGBOOST_ADD_TO_STRING=ON)
endif()

hunter_config(Boost VERSION ${HUNTER_Boost_VERSION} CMAKE_ARGS IOSTREAMS_NO_BZIP2=1)
hunter_config(xgboost VERSION ${HUNTER_xgboost_VERSION} CMAKE_ARGS ${XGBOOST_CMAKE_ARGS})
