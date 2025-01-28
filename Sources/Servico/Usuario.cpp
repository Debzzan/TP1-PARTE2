#include "../../Includes/Servico/Usuario.hpp"
#include <iostream>
#include <sqlite3.h>

using namespace std;

Usuario::Usuario()
{
    CriarTables();
    CriarConta();

}

Usuario::~Usuario()
{
    
}

void Usuario::CriarTables()
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    string sql;
    

    rc = sqlite3_open("..\\TP1-PARTE2\\DB\\Database.db", &db);

    if (rc)
    {
        cerr << "Erro ao abrir o banco de dados: " << sqlite3_errmsg(db) << endl;
        sqlite3_close(db);
        return; // Ensure we exit the function if the database fails to open
    }

    sql = "CREATE TABLE IF NOT EXISTS USUARIO(" \
          "ID INTEGER PRIMARY KEY AUTOINCREMENT," \
          "CODIGO TEXT NOT NULL," \
          "SENHA TEXT NOT NULL);";

    rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

    if (rc != SQLITE_OK)
    {
        cerr << "Erro ao criar a tabela: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
    }

    sqlite3_close(db);
}

void Usuario::CriarConta()
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    string sql;
    string codigo;
    string senha;

    cout << "Digite o codigo do usuario: ";
    cin >> codigo;
    cout << "Digite a senha do usuario: ";
    cin >> senha;

    rc = sqlite3_open("..\\TP1-PARTE2\\DB\\Database.db", &db);

    if (rc)
    {
        cerr << "Erro ao abrir o banco de dados: " << sqlite3_errmsg(db) << endl;
        sqlite3_close(db);
        return; // Ensure we exit the function if the database fails to open
    }

    sql = "INSERT INTO USUARIO (CODIGO, SENHA) VALUES ('" + codigo + "', '" + senha + "');";

    rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

    if (rc != SQLITE_OK)
    {
        cerr << "Erro ao inserir dados: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
    }

    sqlite3_close(db);
}