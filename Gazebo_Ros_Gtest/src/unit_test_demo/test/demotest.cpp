#include <gtest/gtest.h>

TEST(StrCompare, CStrEqual) {
    EXPECT_STREQ("hej", "hej");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}