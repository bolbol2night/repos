FILE(GLOB SRCS *.cpp)

ADD_EXECUTABLE(MyProjectTst ${SRCS})

TARGET_LINK_LIBRARIES(MyProjectTst libgtest libgmock)

ADD_TEST(NAME MyProjectTst COMMAND MyProjectTst)
