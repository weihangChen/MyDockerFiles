#include <gtest/gtest.h>

TEST(TestSuite, testCase1)
{
    ASSERT_EQ(6, 6);
}

TEST(TestSuite, testCase2)
{
    ASSERT_EQ(7, 7);
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "tester");
  ros::NodeHandle nh;
  return RUN_ALL_TESTS();
}