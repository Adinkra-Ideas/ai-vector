#include "vector.hpp"
#include "gtest/gtest.h"

namespace {
class vectorTest : public testing::Test {
protected:



  ai::vector<int> vector1 ;

} ;

TEST_F(vectorTest, SizeMethod) {
  EXPECT_EQ(0u, vector1.size()) ;
}

} // namespace
