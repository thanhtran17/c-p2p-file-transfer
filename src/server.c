#define BACKLOG 20   
#define BUFF_SIZE 1024
#define MAX_CLIENTS 100

typedef struct Client {
  int connfd;
  char username[50];
  char filename[BUFF_SIZE];
  char old_filename[BUFF_SIZE];
  char method[BUFF_SIZE];
} Client;

Client clients[MAX_CLIENTS];
