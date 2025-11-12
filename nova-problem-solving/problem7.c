#include <stdio.h>
#include <stdbool.h>

bool chef_followed_doctor_advice_or_not(int);

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        bool the_amount_chef_consumed=chef_followed_doctor_advice_or_not(x);
        
        if(the_amount_chef_consumed)
        printf("YES\n");
        else
        printf("NO\n");
    }

}

bool chef_followed_doctor_advice_or_not(int x){
    return x >= 2000;
}