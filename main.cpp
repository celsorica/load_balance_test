#include <iostream>
#include <stdlib.h>
#include <string>

#include <gtest/gtest.h>

#include "../load_balance/server.h"
#include "../load_balance/servermanagement.h"

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
