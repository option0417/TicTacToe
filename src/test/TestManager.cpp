#include "gtest/gtest.h"
#include "../../include/Element.h"

TEST(ElementTest, Element) {
    Element obj;
    Status status = O;

    obj.setID(0);
    obj.setStatus(status);

    EXPECT_EQ(0, obj.getID());
    EXPECT_EQ(status, obj.getStatus());
}
