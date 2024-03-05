#include"code.h"

/*static void detecte_auth_root(const char *file){
    FILE *fic;
    if((fic = fopen(file, 'r'))==NULL){
        perror("erreur de lecture");
        exit(EXIT_FAILURE);
    }

}
*/
void initialise(Sys_data *sd, const char *data){
    sscanf(data, "%s %s %s %s", sd->date, sd->user, sd->proces, sd->message);
}



/* void thread_on(){

    long back_len = 0;
    long current_len;
    char line[MAX_SIZE];
    const char file[] = "/var/log/auth.log";
    Sys_data log_Entry;
    FILE *fic;
    if((fic = fopen(file, 'r'))==NULL){
        perror("erreur de lecture");
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
                initialise(&log_Entry, line);
            }else{

                void save_Log_admin_();
                sleep(2);
                continue;
            }
            // code

            back_len = current_len;
        }

        sleep(1);

    }
    

}
*/