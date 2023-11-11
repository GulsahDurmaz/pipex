#include <stdio.h>
#include <unistd.h>

int main() {
    char *args[] = {"ls", "-l", NULL};  // Komut satırı argümanları
    char *env[] = {NULL};  // Çevresel değişkenler

    // ls komutunu çalıştır
    execve("/bin/ls", args, env);

    // execve işlemi başarısız olursa bu kod çalışmaz
    perror("execve"); // Hata mesajını yazdırır
    return 1;
}