/* autor : celso
 * server.h
 * Definicao da classe ServerManagerTest responsável por alguns testes
 */

#ifndef SERVERMNAGEMENTTEST_H
#define SERVERMNAGEMENTTEST_H

#include <memory>

#include "../load_balance/servermanagement.h"

#include <gtest/gtest.h>

class ServerManagementTest : public ::testing::Test
{
public:
    /**
     * @brief ServerManagementTest - Construtor
     */
    ServerManagementTest();

    /**
     * @brief fileNameOk - Arquivo com nome valido para teste
     */
    const std::string fileNameOk = "/home/celso/projetos/load_balance/arquivo.txt";

    /**
     * @brief fileNameError - Aquivo com nome invalido para teste
     */
    const std::string fileNameError = "/home/celso/projetos/load_balance/outroarquivo.txt";

private:
    /**
     * @brief sm - Objeto ServerManagement
     */
    std::unique_ptr<ServerManagement> sm;

protected:

    /**
     * @brief loadFile - Wrapper para chamada do metodo no ServerManage
     * @param fileName - Nome do arquivo
     * @return
     */
    bool loadFile(const std::string &fileName);

    /**
     * @brief createServer - Wrapper para chamada do metodo no ServerManage
     * @param ttask - Numero de ticks
     * @param max - Numero maximo de clientes conectados
     * @param clients - Numero de clientes a serem conectados
     * @return
     */
    size_t createServer(uint32_t ttask, uint32_t max, uint32_t clients);

};

#endif // SERVERMNAGEMENTTEST_H
