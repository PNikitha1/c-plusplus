#include <stdio.h>
#include <stdbool.h>

bool chef_threshold_limit(int , int);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    bool chef_prone_to_errors=chef_threshold_limit(x,y);
    if(chef_prone_to_errors)
    printf("YES");
    else
    printf("NO");

}

bool chef_threshold_limit(int x, int y){
    return x < y;
}
