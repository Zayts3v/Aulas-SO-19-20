    #include <stdio.h>
    #include <stdlib.h>
    #include "guiao0.h"

    // Final
    int main(int argc, char const *argv[]) {

        int *vector = malloc(50 * sizeof(int));

        //testar para dar segmetation fault: fill(vector, 10000000,10)
        fill(vector,50,10);
        printf("Find: %d\n", find(vector,50,10));

        free(vector);

        return 0;
    }

    /* first 
    int main(int argc, char const *argv[]) {
        
        int r = 0;
        int v[10];

        fill(v,10,2);
        r = find(v,10,2);

        printf("%d\n", r);

        return r;
    }
    */

    /* Second
    int vector_global[50];
     
    int main(int argc, char const *argv[]) {

        fill(vector_global,50,10);

        printf("%d\n", find(vector_global,50,10));

        return 0;
    }
    */

    /* third
    int vector_global[50];

    void print (int index) {
        vector_global[index] = 20;
        printf("O valor do vector no índice index: %d\n", vector_global[index]);
    }

    int main(int argc, char const *argv[]) {

        fill(vector_global,50,10);

        print(20);

        printf("Find: %d\n", find(vector_global,50,10));

        return 0;
    }
    */
