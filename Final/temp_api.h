#include "temp.h"

void print_log(struct Temp*[], int);
int read_temp_log(struct Temp**, FILE *);
void month_aver(struct Temp*[], int, int);
void month_max(struct Temp*[], int, int);
void month_min(struct Temp*[], int, int);
void year_aver(struct Temp*[], int);
void year_max(struct Temp*[], int);
void year_min(struct Temp*[], int);
void change_record(struct Temp*[], int, int);
void SortByTemp(struct Temp*[], int);
unsigned int DateToInt(struct Temp*);
void SortByDate(struct Temp*[],int);
void AddRecord(struct Temp*[],int, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, int32_t);
int AddMany(struct Temp*[]);
struct Temp* create_temp();
void free_temp(struct Temp*);
void free_all_temps(struct Temp*[], int);
