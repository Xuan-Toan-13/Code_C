#include <stdio.h>
#include <stdlib.h>

int n, m;
int A[25][25], B[25][25], C[25][25];

void write_file(char *file_name){
    FILE *f = fopen(file_name, "r");
    fseek(f, 0, 0);
    fscanf(f, "%d %d", &n, &m);
    fseek(f, 15, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            fscanf(f, "%d", &A[i][j]);
        }
    }
    fseek(f, 46, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            fscanf(f, "%d", &B[i][j]);
        }
    }
    fclose(f);
}

void print_from_file(char *file_name){
    char line[128];
    FILE *f = fopen(file_name, "r");
    while(fgets(line, 128, f) != NULL){
        printf("%s", line);
    }
    fclose(f);
}

void write_sumary_matrix(char *file_name){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    FILE *f = fopen(file_name, "a");
    fprintf(f, "Ma tran C\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            fprintf(f, "%d ", C[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
}

void read_file(char *file_name){
    FILE *f = fopen(file_name, "r");
    char line[128];
    while(fgets(line, 128, f)){
        printf("%s", line);
    }
    fclose(f);
}

int main()
{
    char *file_name;
    file_name = "MA_TRAN.C";
    write_file(file_name);
    write_sumary_matrix(file_name);
    print_from_file(file_name);
    return 0;
}
