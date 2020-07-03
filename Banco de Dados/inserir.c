#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>

void do_exit(PGconn *conn) {
    
    PQfinish(conn);
    exit(1);
}



int main() {
    
    PGconn *conn = PQconnectdb("user=usuario password=senha dbname=nomebanco");

    if (PQstatus(conn) == CONNECTION_BAD) {
        
        fprintf(stderr, "Conexão falhou: %s\n",
            PQerrorMessage(conn));
        do_exit(conn);
    }
    
    printf("Conexão bem sucedida\n");
    
 
   
    PGresult *res = NULL;
    res = PQexec(conn, "INSERT INTO usuario (usuario,senha) VALUES('teste','12345')");    
    
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {

        printf("INSERT command failed\n");        
        PQclear(res);
        do_exit(conn);
    }else{
    	printf("Dados inseridos com sucesso\n");
    }


    PQclear(res);
    PQfinish(conn);

    return 0;
}
