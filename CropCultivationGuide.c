#include <stdio.h>
#include <stdlib.h>
#include "CropCultivationGuide.h"

/* Function declarations */
void farmingTipsMenu();
void cropFAQsMenu();
void userManual();

/* ================= MAIN GUIDE MENU ================= */

void cropCultivationGuideMenu() {
    int choice;
    int loop = 1;

    do {
        system("cls");

        printf("\n###################################################\n");
        printf("##            Crop Cultivation Guide             ##\n");
        printf("###################################################\n\n");

        printf("1. Farming Tips\n");
        printf("2. Crop FAQs\n");
        printf("3. User Manual\n");
        printf("4. Back\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                farmingTipsMenu();
                break;

            case 2:
                cropFAQsMenu();
                break;

            case 3:
                userManual();
                break;

            case 4:
                loop = 0;
                break;

            default:
                printf("\nInvalid input.\n");
                system("pause");
        }

    } while(loop == 1);
    system("cls");
}

/* ================= FARMING TIPS ================= */

void farmingTipsMenu() {
    int choice;
    int loop = 1;

    do {
        system("cls");

        printf("========== FARMING TIPS ==========\n\n");

        printf("1. Soil Management in Sloping Land\n");
        printf("2. Corn Farming (Upland Corn)\n");
        printf("3. Vegetable Farming (Highland Veggies)\n");
        printf("4. Coffee Farming (Arabica)\n");
        printf("5. Organic Fertilization\n");
        printf("6. Erosion Control\n");
        printf("7. Pest Management (High Humidity Areas)\n");
        printf("8. Rainy Season Farming Strategy\n");
        printf("9. Post-Harvest Handling\n");
        printf("10. Farm Planning for Small Upland Farms\n");
        printf("11. Back\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        system("cls");

        switch(choice) {

            case 1:
                printf("SOIL MANAGEMENT IN SLOPING AREAS\n");
                printf("- Use contour farming to reduce erosion in Lantapan hills\n");
                printf("- Add compost and organic matter regularly\n");
                printf("- Avoid burning crop residues\n");
                printf("- Keep soil covered to prevent nutrient loss\n");
                break;

            case 2:
                printf("UPLAND CORN FARMING\n");
                printf("- Plant at start of rainy season (March to May)\n");
                printf("- Use improved hybrid corn varieties\n");
                printf("- Apply fertilizer in split application\n");
                printf("- Maintain proper spacing to avoid competition\n");
                break;

            case 3:
                printf("HIGH-VALUE VEGETABLE FARMING\n");
                printf("- Ideal crops: cabbage, carrots, pechay, beans\n");
                printf("- Use raised beds for drainage control\n");
                printf("- Prevent waterlogging during heavy rains\n");
                printf("- Monitor daily for pests and diseases\n");
                break;

            case 4:
                printf("COFFEE FARMING (ARABICA)\n");
                printf("- Lantapan elevation is ideal for Arabica coffee\n");
                printf("- Requires partial shade (banana/trees)\n");
                printf("- Prune regularly to improve yield\n");
                printf("- Harvest only ripe red cherries\n");
                break;

            case 5:
                printf("ORGANIC FERTILIZATION\n");
                printf("- Use compost, manure, and vermicast\n");
                printf("- Improves soil fertility long-term\n");
                printf("- Reduces dependence on chemical fertilizers\n");
                printf("- Apply before planting and early growth stages\n");
                break;

            case 6:
                printf("EROSION CONTROL\n");
                printf("- Build contour hedgerows using grasses\n");
                printf("- Practice terracing in steep areas\n");
                printf("- Maintain ground cover at all times\n");
                printf("- Prevent soil runoff during heavy rains\n");
                break;

            case 7:
                printf("PEST MANAGEMENT\n");
                printf("- High humidity increases fungal diseases\n");
                printf("- Practice crop rotation\n");
                printf("- Use natural pesticides (garlic, chili, neem)\n");
                printf("- Remove infected plants immediately\n");
                break;

            case 8:
                printf("RAINY SEASON STRATEGY\n");
                printf("- Ensure proper drainage systems\n");
                printf("- Use raised beds for vegetables\n");
                printf("- Avoid planting in saturated soil\n");
                printf("- Monitor fields frequently\n");
                break;

            case 9:
                printf("POST-HARVEST HANDLING\n");
                printf("- Proper drying prevents mold in corn\n");
                printf("- Store crops in dry, ventilated areas\n");
                printf("- Handle vegetables gently to avoid damage\n");
                printf("- Proper storage increases market value\n");
                break;

            case 10:
                printf("SMALL FARM PLANNING\n");
                printf("- Diversify crops: corn, vegetables, coffee\n");
                printf("- Stagger planting for continuous income\n");
                printf("- Prioritize high-value crops\n");
                printf("- Match planting with rainfall patterns\n");
                break;

            case 11:
                loop = 0;
                continue;

            default:
                printf("Invalid input.\n");
        }

        system("pause");

    } while(loop == 1);
}

/* ================= CROP FAQS ================= */

void cropFAQsMenu() {
    int choice;
    int loop = 1;

    do {
        system("cls");

        printf("========== CROP FAQs ==========\n\n");

        printf("1. Why is my corn stunted?\n");
        printf("2. Why do vegetables rot during rainy season?\n");
        printf("3. Why is erosion severe in upland farms?\n");
        printf("4. What crops grow best in Lantapan?\n");
        printf("5. Why are coffee leaves turning yellow?\n");
        printf("6. How to increase corn yield?\n");
        printf("7. Why are pests worse during rainy season?\n");
        printf("8. Can farming continue during continuous rain?\n");
        printf("9. Why is my harvest low despite fertilizer?\n");
        printf("10. What is best crop combination for small farms?\n");
        printf("11. Back\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        system("cls");

        switch(choice) {

            case 1:
                printf("CORN STUNTING IN UPLAND FARMS\n\n");
                printf("- Caused by poor soil fertility, especially nitrogen deficiency.\n");
                printf("- Heavy rainfall in Lantapan can wash away nutrients from sloping land.\n");
                printf("- Poor spacing also causes competition for nutrients.\n");
                printf("- SOLUTION: Apply fertilizer in split doses and use compost to improve soil quality.\n");
                break;

            case 2:
                printf("VEGETABLE ROT DURING RAINY SEASON\n\n");
                printf("- Caused by excess moisture and poor drainage in farm beds.\n");
                printf("- Fungal diseases spread quickly in humid conditions.\n");
                printf("- SOLUTION: Use raised beds, improve drainage, and avoid overwatering.\n");
                break;

            case 3:
                printf("SOIL EROSION IN UPLAND AREAS\n\n");
                printf("- Lantapan farms are mostly sloped, making soil easily washed away by rain.\n");
                printf("- Without vegetation cover, topsoil is lost quickly.\n");
                printf("- SOLUTION: Practice contour farming, terracing, and plant ground cover crops.\n");
                break;

            case 4:
                printf("BEST CROPS FOR LANTAPAN\n\n");
                printf("- Corn (main staple crop)\n");
                printf("- Coffee (Arabica thrives in high elevation)\n");
                printf("- Vegetables like cabbage, carrots, pechay, beans\n");
                printf("- These crops suit cool climate and highland conditions.\n");
                break;

            case 5:
                printf("COFFEE LEAF YELLOWING\n\n");
                printf("- Usually caused by nitrogen deficiency or poor soil nutrients.\n");
                printf("- Excess water can damage roots and reduce nutrient absorption.\n");
                printf("- SOLUTION: Improve drainage and apply organic fertilizer regularly.\n");
                break;

            case 6:
                printf("INCREASING CORN YIELD\n\n");
                printf("- Use high-quality hybrid seeds recommended for upland areas.\n");
                printf("- Apply fertilizer at correct growth stages (not all at once).\n");
                printf("- Maintain proper plant spacing to reduce competition.\n");
                printf("- Control weeds and pests early.\n");
                break;

            case 7:
                printf("PESTS DURING RAINY SEASON\n\n");
                printf("- Moist conditions increase fungal growth and insect reproduction.\n");
                printf("- Overcrowded crops make pest spread faster.\n");
                printf("- SOLUTION: Practice crop rotation, proper spacing, and use natural sprays (neem, garlic).\n");
                break;

            case 8:
                printf("FARMING DURING CONTINUOUS RAIN\n\n");
                printf("- Farming is still possible but high risk in upland areas.\n");
                printf("- Soil becomes too soft and prone to erosion.\n");
                printf("- SOLUTION: Use raised beds, drainage canals, and delay planting if soil is saturated.\n");
                break;

            case 9:
                printf("LOW HARVEST DESPITE FERTILIZER\n\n");
                printf("- Fertilizer may be applied at wrong timing or wrong amount.\n");
                printf("- Soil may already be acidic or degraded from continuous farming.\n");
                printf("- Plants may not absorb nutrients due to poor root health or excess water.\n");
                printf("- SOLUTION: Test soil, improve organic matter, and follow proper fertilization schedule.\n");
                break;

            case 10:
                printf("BEST CROP COMBINATION FOR SMALL FARMS\n\n");
                printf("- Corn: main income crop\n");
                printf("- Vegetables: quick harvest and cash flow\n");
                printf("- Coffee: long-term stable income\n");
                printf("- This combination balances short-term and long-term farming income.\n");
                break;

            case 11:
                loop = 0;
                continue;

            default:
                printf("Invalid input.\n");
        }

        system("pause");

    } while(loop == 1);
}

/* ================= USER MANUAL ================= */

void userManual() {
    int choice;

    do {
        system("cls");

        printf("========== USER MANUAL ==========\n\n");

        printf("1. STARTING THE SYSTEM\n");
        printf("2. REGISTRATION\n");
        printf("3. LOGIN\n");
        printf("4. MAIN MENU OPTIONS\n");
        printf("5. EXIT SYSTEM\n");
        printf("6. Back\n\n");

        printf("---------- IMPORTANT NOTES ----------\n");
        printf("- Enter numbers only\n");
        printf("- Follow menu instructions carefully\n");
        printf("-------------------------------------\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        system("cls");

        switch(choice) {

            case 1:
                printf("STARTING THE SYSTEM\n\n");
                printf("- Run the program\n");
                printf("- Landing page menu will appear\n");
                break;

            case 2:
                printf("REGISTRATION\n\n");
                printf("- Press 1\n");
                printf("- Enter required user information\n");
                printf("- Go back to login after registration\n");
                break;

            case 3:
                printf("LOGIN\n\n");
                printf("- Press 2\n");
                printf("- Enter username and password\n");
                printf("- If correct, you will enter the main menu\n");
                break;

            case 4:
                printf("MAIN MENU OPTIONS\n\n");

                printf("Option 1: Crop Cultivation Guide\n");
                printf("- Opens farming guide system\n\n");

                printf("Option 2: Inventory\n");
                printf("- TBA\n\n");

                printf("Option 3: Crop Growth Monitoring\n");
                printf("- TBA\n\n");

                printf("Option 4: Sign Out\n");
                printf("- Logs out user\n\n");

                printf("Option 5: Exit\n");
                printf("- Closes system\n");
                break;

            case 5:
                printf("EXIT SYSTEM\n\n");
                printf("- Closes the program\n");
                break;

            case 6:
                return;

            default:
                printf("Invalid input.\n");
        }

        system("pause");

    } while(choice != 6);
}

