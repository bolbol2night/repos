FILE(GLOB SRCS *.cpp)

ADD_LIBRARY(UtilsTest ${SRCS})

TARGET_LINK_LIBRARIES(UtilsTest utils libgtest libgmock)

ADD_TEST(NAME UtilsTest COMMAND UtilsTest)
