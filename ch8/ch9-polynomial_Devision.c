#include <stdio.h>

int main(void) {
    printf("Polynomial devision\n");
    int p[2][101] = {0}, devisor[2][101] = {0};
    int pmax_order_flag = 0, pmax_order = 0;

    do {
        scanf("%d", &p[1][0]);
        if(pmax_order_flag == 0) {
            pmax_order = p[1][0];
            pmax_order_flag = 1;
        }
        p[0][p[1][0]] = 1;
    } while(p[1][0] != 0);
    for(int i = pmax_order; i >= 0; i--)
        if(p[0][i] != 0)
            scanf("%d", &p[0][i]);

    int dmax_order_flag = 0, dmax_order = 0;
    do {
        scanf("%d", &devisor[1][0]);
        if(dmax_order_flag == 0) {
            dmax_order = devisor[1][0];
            dmax_order_flag = 1;
        }
        devisor[0][devisor[1][0]] = 1;
    } while(devisor[1][0] != 0);
    for(int i = dmax_order; i >= 0; i--)
        if(devisor[0][i] != 0)
            scanf("%d", &devisor[0][i]);

    int q[2][101] = {0};
    if(pmax_order >= dmax_order){
        for(int i = (pmax_order - dmax_order); i >= 0; i++){
            for(int j = 0; j <= dmax_order; j++){
                q[1][pmax_order - j] = p[1][]
            }
        }
    }else{}

    return 0;
}
