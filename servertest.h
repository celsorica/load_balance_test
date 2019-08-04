#ifndef SERVERTEST_H
#define SERVERTEST_H

#include <memory>

#include "../load_balance/server.h"

#include <gtest/gtest.h>

class ServerTest : public testing::Test
{
public:
    /**
     * @brief ServerTest - Construtor
     */
    ServerTest();

    /**
     * @brief ~ServerTest - Destrutor
     */
    virtual ~ServerTest();

protected:

    struct DataServer {
        uint32_t m_ttask = 0;
        uint32_t m_max_user = 0;
        uint32_t m_users_connected = 0;
        DataServer(uint32_t ttask, uint32_t max_user, uint32_t users_connected) :
            m_ttask(ttask), m_max_user(max_user), m_users_connected(users_connected) {
        }
    };

    /**
     * @brief addClient - Wrapper para chamada do metodo no Server
     */
    size_t addClient(DataServer& dataServer);

    bool isFull(DataServer& dataServer);
};

#endif // SERVERTEST_H
