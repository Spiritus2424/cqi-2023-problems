/*
 * gcc main.c -O0 -g -Wall -m32 -Wl,-z,norelro
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct user_data {
    unsigned int id;
    /* omitted fields */
};

struct login_data {
    char username[20];
    char password[20];
    struct user_data* data;
    unsigned int id;
};

#include "private.c"

void execute_me(void) {
    print_flag();
    exit(1);
}

int main() {
    struct login_data login;
    login.data = new_user_data();

    puts("username: ");
    scanf("%s", login.username);

    puts("password: ");
    login.id = get_user_id(login.username);
    scanf("%s", login.password);

    login.data->id = login.id;
    if (!authenticate_user(login.username, login.password)) {
        puts("fail to authentificate user\n");
        sleep(1000); /* utile pour debug */
        return 1;
    }

    sleep(1000); /* utile pour debug */
    return 0;
}
