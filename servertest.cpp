#include "servertest.h"

ServerTest::ServerTest() {

}

ServerTest::~ServerTest() {

}

size_t ServerTest::addClient(DataServer& dataServer) {
    std::unique_ptr<Server> server = std::unique_ptr<Server>(
            new Server(dataServer.m_ttask, dataServer.m_max_user, dataServer.m_users_connected));
    server->addClient();
    return server->m_clients.size();
}

bool ServerTest::isFull(ServerTest::DataServer &dataServer)
{
    std::unique_ptr<Server> server = std::unique_ptr<Server>(
            new Server(dataServer.m_ttask, dataServer.m_max_user, dataServer.m_users_connected));
    return server->m_clients.size();
}

TEST_F(ServerTest, addClient) {
    DataServer dataServer = { 4, 2, 1 };
    EXPECT_EQ(addClient(dataServer) == 2, true);
}

TEST_F(ServerTest, isFull) {
    DataServer dataServer = { 4, 2, 2 };
    EXPECT_EQ(isFull(dataServer), true);
}
