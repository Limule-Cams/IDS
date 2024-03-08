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


