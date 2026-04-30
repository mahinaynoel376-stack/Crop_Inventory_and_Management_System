#ifndef VIEWINVENTORYTHINGS
#define VIEWINVENTORYTHINGS

struct Crop {
    int ID;
    char name[30];
    float quantity;
    int storageMode; // 1 = Room Temp, 2 = Refrigerated
    int h_year, h_month, h_day;
    int s_year, s_month, s_day;
};

typedef struct {
    char name[30];
    int shelfLifeRoom;
    int shelfLifeRef;
    int growthDays;
} CropTemplate;

extern struct Crop inventory[100];
extern int inventoryCount;
extern int totalTemplates;
extern CropTemplate predefinedCrops[];

void loadData(char curentUser[]);
void calculateExpiry(struct Crop *c, int shelfLife);
void addCrop(char currentUser[]);
void displayProductList(char currentUser[]);
void updateCrop(char currentUser[]);
void deleteCrop(char currentUser[]);

#endif // VIEWINVENTORYTHINGS
