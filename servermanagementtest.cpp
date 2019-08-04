#include "servermanagementtest.h"

ServerManagementTest::ServerManagementTest() : sm(new ServerManagement) {

}

bool ServerManagementTest::loadFile(const std::string& fileName) {
    return sm->loadFile(fileName);
}

size_t ServerManagementTest::createServer(uint32_t ttask, uint32_t max, uint32_t clients) {
    sm->m_ttask = ttask;
    sm->m_umax = max;
    sm->m_listServers.clear();
    sm->createServer(clients);
    return sm->m_listServers.size();
}

TEST_F(ServerManagementTest, loadFile) {
    EXPECT_EQ(loadFile(fileNameOk), true);
    EXPECT_EQ(loadFile(fileNameError), false);
}

TEST_F(ServerManagementTest, createServers) {
    EXPECT_EQ(createServer(4, 2, 6), 3);
}

