//
// Created by gal on 17/03/19.
//
int main(void) {
    pid_t pid;
    int first_status;
    int second_status;
    int third_status;
    pid = fork(); // the child pid is 99
    if (pid > 0) {
        first_status = detach(pid); // status = 0
        second_status = detach(pid); // status = -1, because this process has already
        // detached this child, and it doesn’t have
        // this child anymore.
        third_status = detach(77); // status = -1, because this process doesn’t
        // have a child with this pid.
    }
}
