#define MAX_NUM_OF_OPTIONS 4
#define NUM_OF_MENU_ITEMS 10
#define VALUE_MAX_DIGITS 4


enum menu_type
{
    VALUE,
    OPTION,
    ACTION
};

typedef struct
{
    const char *name_;
    menu_type type; // 0: value type, 1:option type, 2:action type
    int value;
    int decimals;
    int lim;
    const char *options[MAX_NUM_OF_OPTIONS];
    const char *suffix;
} menu_item;
