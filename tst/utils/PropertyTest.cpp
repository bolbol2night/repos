#include "PropertyTest.h"
#include "../../utils/Property.h"

TEST_F(PropertyTest, PropertyDefined) {
  Property<std::string, unsigned> p("p", 123456789);
  EXPECT_EQ(p(), 123456789);
}
