#include <gtest/gtest.h>

class PropertyTest : public ::testing::Test {
protected:
  PropertyTest();
  virtual ~PropertyTest();
  virtual void SetUp();
  virtual void TearDown();
};

