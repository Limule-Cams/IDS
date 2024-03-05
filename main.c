#include"code.h"

/*
void main(){

    long back_len = 0;
    long current_len;
    char line[MAX_SIZE];
    const char file[] = "/var/log/auth.log";
    Sys_data *log_Entry;
    log_Entry = malloc(sizeof(Sys_data));
    if(log_Entry==NULL){
        perror("fail to allocation");
        exit(1);
    }
    FILE *fic;
    if((fic = fopen(file, "r"))==NULL){
        perror("erreur de lecture");
        free(log_Entry);
        exit(EXIT_FAILURE);
    }
    while (1)
    {
        fseek(fic, 0, SEEK_END);
        current_len = ftell(fic);

        if(current_len != back_len){
            // code 

            fseek(fic, back_len - 1, SEEK_SET);
            if((fgets(line, MAX_SIZE, fic))!=NULL){
                printf("\n%s\n", line);
                initialise(log_Entry, line);
                printf("%s\n%s\n%s\n%s\n", log_Entry->date, log_Entry->user, log_Entry->proces, log_Entry->message);
            }else{

                printf("aucune entrée lu\n");
                sleep(2);
                continue;
            }
            // code

            back_len = current_len;
        }

        sleep(1);

    }

    free(log_Entry);
    

}
*/
int main() {
    long back_len = 0;
    long current_len;
    char line[MAX_SIZE];
    const char file[] = "/var/log/auth.log";
    Sys_data *log_Entry;
    log_Entry = malloc(sizeof(Sys_data));
    if (log_Entry == NULL) {
        perror("fail to allocation");
        exit(1);
    }
    FILE *fic;
    if ((fic = fopen(file, "r")) == NULL) {
        perror("erreur de lecture");
        free(log_Entry);
        exit(EXIT_FAILURE);
    }
    while (1) {
        fseek(fic, 0, SEEK_END);
        current_len = ftell(fic);

        if (current_len != back_len) {
            fseek(fic, back_len, SEEK_SET);
            while (fgets(line, MAX_SIZE, fic) != NULL) {
                printf("\n%s\n", line);
                initialise(log_Entry, line);
                printf("%s\n%s\n%s\n%s\n", log_Entry->date, log_Entry->user, log_Entry->proces, log_Entry->message);
            }
            back_len = current_len;
        }

        sleep(1);
    }

    free(log_Entry);

    return 0;
}