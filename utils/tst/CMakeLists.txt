FILE(GLOB SRCS *.cpp)

ADD_LIBRARY(UtilsTest ${SRCS})

TARGET_LINK_LIBRARIES(UtilsTest utils gtest gmock)

ADD_TEST(UtilsTest PropertyTest)
