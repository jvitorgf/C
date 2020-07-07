
#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>

void do_exit(PGconn *conn) {
    
    PQfinish(conn);
    exit(1);
}

int main() {
    
    PGconn *conn = PQconnectdb("user=postgres password=senha dbname=nomedobanco");

    if (PQstatus(conn) == CONNECTION_BAD) {
        
        fprintf(stderr, "Connection to database failed: %s\n",
            PQerrorMessage(conn));
        do_exit(conn);
    }

    PGresult *res = PQexec(conn, "UPDATE usuario SET usuario = 'teste123',senha = 'senha321' WHERE usuario = 'Abc'");    
    
     if (PQresultStatus(res) != PGRES_COMMAND_OK) {

        printf("UPDATE command failed\n");        
        PQclear(res);
        do_exit(conn);
    }    



    PQclear(res);
    PQfinish(conn);

    return 0;
}