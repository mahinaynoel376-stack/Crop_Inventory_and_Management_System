#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "CropCultivationGuide.h"


/* Function declarations */
void farmingTipsMenu();
void cropFAQsMenu();
void userManual();

void grainsmenu();
void vegetablesmenu();
void permanentcropsmenu();
void yellowcorn();
void whitecorn();
void sweetcorn();
void malagkitcorn();
void tubigan();
void dorado();
void heirloom();

// CABBAGE
void scorpioF1Cabbage();
void kKCrossCabbage();
void tropicanaF1Cabbage();

// POTATO
void granolaPotato();
void desireePotato();
void atlanticPotato();
void igorotaPotato();

// BROCCOLI
void greenMagicF1();
void chevalierF1();
void marathonF1();

// CAULIFLOWER
void cassiusF1();
void whiteFlashF1();
void snowCrown();

// CARROT
void nantesCarrot();
void chantenayCarrot();
void kurodaCarrot();

// BELL PEPPER
void californiaWonder();

// CHINESE CABBAGE
void wongBok();
void michihili();

// LETTUCE
void icebergLettuce();
void romaineLettuce();
void looseLeafLettuce();

// CORN
void yellowcorn();
void whitecorn();
void sweetcorn();
void malagkitcorn();

// RICE
void tubigan();
void dorado();
void heirloom();

// CABBAGE
void scorpioF1Cabbage();
void kKCrossCabbage();
void tropicanaF1Cabbage();

// POTATO
void granolaPotato();
void desireePotato();
void atlanticPotato();
void igorotaPotato();

// BROCCOLI
void greenMagicF1();
void chevalierF1();
void marathonF1();

// CAULIFLOWER
void cassiusF1();
void whiteFlashF1();
void snowCrown();

// CARROT
void nantesCarrot();
void chantenayCarrot();
void kurodaCarrot();

// BELL PEPPER
void californiaWonder();

// CHINESE CABBAGE
void wongBok();
void michihili();

// LETTUCE
void icebergLettuce();
void romaineLettuce();
void looseLeafLettuce();

// TOMATO
void diamanteMaxF1();
void marikitF1();
void romaTomato();

// EGGPLANT
void pinakbetEggplant();
void violetaF1();

// BITTER GOURD
void galaxyF1Ampalaya();
void staRitaAmpalaya();

// SWEET POTATO
void vsp2SweetPotato();
void imeldaSweetPotato();

// GINGER
void nativeTurmeric();
void bubodGinger();

// CHAYOTE
void greenSayote();
void whiteSayote();

// STRINGBEANS
void baguioPoleSitaw();
void baguioBushSitaw();

// MUNG BEAN
void nsicMg5();
void pagasa3();

// COFFEE
void arabicaCoffee();
void robustaCoffee();
void libericaCoffee();
void excelsaCoffee();

// SUGARCANE
void vmc86550();
void phil991268();
void binaluanSugarcane();

// BANANA
void cavendishBanana();
void sabaBanana();
void latundanBanana();
void fhia01Banana();

// PINEAPPLE
void smoothCayennePineapple();
void queenPineapple();
void redSpanishPineapple();

// ABACA
void laylayAbaca();
void inosaAbaca();

// CINCHONA
void cLedgeriana();
void cPubescens();
void cOfficinalis();
void cCalisaya();

// MENUS - VEGETABLES
void cabbageMenu();
void potatoMenu();
void broccoliMenu();
void cauliflowerMenu();
void carrotMenu();
void chineseCabbageMenu();
void lettuceMenu();
void tomatoMenu();
void eggplantMenu();
void bitterGourdMenu();
void stringBeansMenu();
void mungBeanMenu();
void vegetablesmenu();

void pressAnyKey();

/* ================= MAIN GUIDE MENU ================= */

void cropCultivationGuideMenu() {
    int choice;
    int loop = 1;

    do {
        system("cls");

        printf("\n###################################################\n");
        printf("##           Crop Cultivation Guide              ##\n");
        printf("###################################################\n");
        printf("                                               \n");
        printf("  [1] Lantapan Crops Directory                 \n");
        printf("  [2] Farming Tips                             \n");
        printf("  [3] User Manual                              \n");
        printf("  [4] Back                                     \n");
        printf("                                               \n");



        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                cropFAQsMenu();
                break;

            case 2:
                farmingTipsMenu();
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

        printf("\n###################################################\n");
        printf("##                 Farming Tips                  ##\n");
        printf("###################################################\n");
        printf("                                               \n");
        printf("  [1]  Soil Management (Sloping Land)          \n");
        printf("  [2]  Corn Farming (Upland Corn)              \n");
        printf("  [3]  Vegetable Farming (Highland Veggies)    \n");
        printf("  [4]  Coffee Farming (Arabica)                \n");
        printf("  [5]  Organic Fertilization                   \n");
        printf("  [6]  Erosion Control                         \n");
        printf("  [7]  Pest Management (Humid Areas)           \n");
        printf("  [8]  Rainy Season Strategy                   \n");
        printf("  [9]  Post-Harvest Handling                   \n");
        printf("  [10] Farm Planning (Small Farms)             \n");
        printf("  [11] Back                                    \n");



        printf("\nEnter choice: ");
        scanf("%d", &choice);

        system("cls");

        switch(choice) {

        case 1:
            printf("\n------------------------------------------------------------\n");
            printf(" SOIL MANAGEMENT IN SLOPING AREAS\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Sloping upland farms (like in Bukidnon) are prone to erosion\n");
            printf("and nutrient loss if not managed properly.\n\n");

            printf("PRACTICES:\n");
            printf("- Contour farming slows water runoff and prevents soil loss\n");
            printf("- Add compost/manure to improve soil fertility\n");
            printf("- Avoid burning crop residues to preserve nutrients\n");
            printf("- Use mulch or cover crops to protect soil surface\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Plant legumes to add nitrogen to the soil\n");
            printf("- Combine with agroforestry (trees + crops)\n\n");

            printf("REFERENCE:\n");
            printf("DA-BSWM | FAO Soil Management | PCARRD SALT\n");
            break;

        case 2:
            printf("\n------------------------------------------------------------\n");
            printf(" UPLAND CORN FARMING\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Corn is a major upland crop that requires proper timing,\n");
            printf("spacing, and fertilization for good yield.\n\n");

            printf("PRACTICES:\n");
            printf("- Plant early rainy season (March–May)\n");
            printf("- Use improved or hybrid corn varieties\n");
            printf("- Apply fertilizer in split application\n");
            printf("- Maintain proper spacing (70–75 cm rows)\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Control weeds within first 30 days\n");
            printf("- Monitor pests like corn borers\n\n");

            printf("REFERENCE:\n");
            printf("DA Corn Guide | PhilMaize | FAO Maize Manual\n");
            break;

        case 3:
            printf("\n------------------------------------------------------------\n");
            printf(" HIGH-VALUE VEGETABLE FARMING\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Vegetables provide higher income but need intensive care\n");
            printf("and regular monitoring.\n\n");

            printf("PRACTICES:\n");
            printf("- Grow crops like cabbage, carrots, pechay, beans\n");
            printf("- Use raised beds for better drainage\n");
            printf("- Prevent waterlogging during heavy rains\n");
            printf("- Monitor daily for pests and diseases\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Use mulch to retain soil moisture\n");
            printf("- Practice crop rotation\n\n");

            printf("REFERENCE:\n");
            printf("BPI | DA-HVCDP | AVRDC Guides\n");
            break;

        case 4:
            printf("\n------------------------------------------------------------\n");
            printf(" COFFEE FARMING (ARABICA)\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Arabica coffee grows well in cool, high-elevation areas\n");
            printf("like uplands of Bukidnon.\n\n");

            printf("PRACTICES:\n");
            printf("- Requires partial shade (banana or trees)\n");
            printf("- Regular pruning improves yield\n");
            printf("- Harvest only ripe red cherries\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Apply organic fertilizer regularly\n");
            printf("- Maintain proper spacing between plants\n\n");

            printf("REFERENCE:\n");
            printf("DA Coffee Guide | Coffee Roadmap PH | Nestle Manual\n");
            break;

        case 5:
            printf("\n------------------------------------------------------------\n");
            printf(" ORGANIC FERTILIZATION\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Organic fertilizers improve soil health and reduce chemical\n");
            printf("dependency over time.\n\n");

            printf("PRACTICES:\n");
            printf("- Use compost, manure, and vermicast\n");
            printf("- Apply before planting and early growth stage\n");
            printf("- Improves long-term soil fertility\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Combine with crop rotation\n");
            printf("- Avoid over-application\n\n");

            printf("REFERENCE:\n");
            printf("RA 10068 | DA Organic Program | FAO Organic Guide\n");
            break;

        case 6:
            printf("\n------------------------------------------------------------\n");
            printf(" EROSION CONTROL\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Erosion removes topsoil and nutrients, reducing productivity.\n\n");

            printf("PRACTICES:\n");
            printf("- Build contour hedgerows (grass barriers)\n");
            printf("- Practice terracing on steep slopes\n");
            printf("- Maintain ground cover at all times\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Avoid over-tilling soil\n");
            printf("- Use deep-rooted plants\n\n");

            printf("REFERENCE:\n");
            printf("DENR | FAO Erosion Guide | PCARRD SALT\n");
            break;

        case 7:
            printf("\n------------------------------------------------------------\n");
            printf(" PEST MANAGEMENT\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Proper pest management reduces crop damage and improves yield.\n\n");

            printf("PRACTICES:\n");
            printf("- Practice crop rotation\n");
            printf("- Use natural pesticides (garlic, chili, neem)\n");
            printf("- Remove infected plants immediately\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Encourage beneficial insects\n");
            printf("- Monitor crops regularly\n\n");

            printf("REFERENCE:\n");
            printf("DA IPM | IRRI | FAO Pest Control\n");
            break;

        case 8:
            printf("\n------------------------------------------------------------\n");
            printf(" RAINY SEASON STRATEGY\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Heavy rains can damage crops if proper preparation is not done.\n\n");

            printf("PRACTICES:\n");
            printf("- Ensure proper drainage systems\n");
            printf("- Use raised beds\n");
            printf("- Avoid planting in saturated soil\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Use protective covers for sensitive crops\n");
            printf("- Monitor weather regularly\n\n");

            printf("REFERENCE:\n");
            printf("DA CSA Guide | PAGASA | FAO Rainfed Systems\n");
            break;

        case 9:
            printf("\n------------------------------------------------------------\n");
            printf(" POST-HARVEST HANDLING\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Proper handling prevents losses and maintains crop quality.\n\n");

            printf("PRACTICES:\n");
            printf("- Dry grains properly to prevent mold\n");
            printf("- Store in dry, ventilated areas\n");
            printf("- Handle vegetables carefully to avoid damage\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Use proper storage containers\n");
            printf("- Keep storage pest-free\n\n");

            printf("REFERENCE:\n");
            printf("PHilMech | FAO Postharvest | DA Guide\n");
            break;

        case 10:
            printf("\n------------------------------------------------------------\n");
            printf(" SMALL FARM PLANNING\n");
            printf("------------------------------------------------------------\n");

            printf("DESCRIPTION:\n");
            printf("Planning helps maximize income and reduce farming risks.\n\n");

            printf("PRACTICES:\n");
            printf("- Diversify crops (corn, vegetables, coffee)\n");
            printf("- Stagger planting schedule\n");
            printf("- Focus on high-value crops\n\n");

            printf("EXTRA TIPS:\n");
            printf("- Track expenses and income\n");
            printf("- Follow seasonal planting patterns\n\n");

            printf("REFERENCE:\n");
            printf("DA FBS | ATI | FAO Farm Management\n");
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

        printf("------------------------------------------------------------\n");
        printf("                    USER MANUAL\n");
        printf("------------------------------------------------------------\n\n");

        printf(" [1] Getting Started (Start & Exit)\n");
        printf(" [2] Account Access (Register & Login)\n");
        printf(" [3] Crop Cultivation Guide\n");
        printf(" [4] Inventory System\n");
        printf(" [5] Crop Monitoring System\n");
        printf(" [6] Back\n\n");

        printf("------------------------------------------------------------\n");
        printf(" IMPORTANT NOTES:\n");
        printf(" - Enter numbers only when selecting options\n");
        printf(" - Follow on-screen instructions carefully\n");
        printf(" - Avoid leaving inputs blank\n");
        printf("------------------------------------------------------------\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        system("cls");

        switch(choice) {

        case 1:
            printf("------------------------------------------------------------\n");
            printf(" GETTING STARTED (START & EXIT)\n");
            printf("------------------------------------------------------------\n\n");

            printf("STARTING THE SYSTEM:\n");
            printf("- Run the program\n");
            printf("- Wait for the main menu to appear\n");
            printf("- Choose Register or Login\n\n");

            printf("EXITING THE SYSTEM:\n");
            printf("- Select Exit from any menu\n");
            printf("- Program will close automatically\n\n");

            printf("NOTES:\n");
            printf("- Restart if system becomes unresponsive\n");
            printf("- Exit properly to avoid data issues\n");
            break;

        case 2:
            printf("------------------------------------------------------------\n");
            printf(" ACCOUNT ACCESS (REGISTER & LOGIN)\n");
            printf("------------------------------------------------------------\n\n");

            printf("REGISTRATION:\n");
            printf("- Select Register\n");
            printf("- Enter username and password\n");
            printf("- Confirm details\n\n");

            printf("LOGIN:\n");
            printf("- Enter username\n");
            printf("- Enter password\n");
            printf("- Access system if correct\n\n");

            printf("TIPS:\n");
            printf("- Use a unique username\n");
            printf("- Remember your credentials\n");
            printf("- Check input if login fails\n");
            break;

        case 3:
            printf("------------------------------------------------------------\n");
            printf(" CROP CULTIVATION GUIDE\n");
            printf("------------------------------------------------------------\n\n");

            printf("DESCRIPTION:\n");
            printf("- Contains 50+ crops grown in Lantapan\n\n");

            printf("FEATURES:\n");
            printf("- View crop descriptions and types\n");
            printf("- Learn planting and harvesting periods\n");
            printf("- Access farming tips and techniques\n\n");

            printf("PURPOSE:\n");
            printf("- Provide farming knowledge\n");
            printf("- Improve crop production\n");
            break;

        case 4:
            printf("------------------------------------------------------------\n");
            printf(" INVENTORY SYSTEM\n");
            printf("------------------------------------------------------------\n\n");

            printf("DESCRIPTION:\n");
            printf("- Manages stored crops and farm records\n\n");

            printf("FEATURES:\n");
            printf("- Display all crops in inventory\n");
            printf("- Add new crop records\n");
            printf("- Track stored crop data\n\n");

            printf("PURPOSE:\n");
            printf("- Organize crop information\n");
            printf("- Track farm resources\n");
            printf("- Support decision-making\n");
            break;

        case 5:
            printf("------------------------------------------------------------\n");
            printf(" CROP MONITORING SYSTEM\n");
            printf("------------------------------------------------------------\n\n");

            printf("DESCRIPTION:\n");
            printf("- Tracks farm production and crop status\n\n");

            printf("FEATURES:\n");
            printf("- Record land area in hectares\n");
            printf("- Specify crop type\n");
            printf("- Input date planted\n\n");

            printf("PURPOSE:\n");
            printf("- Monitor crop growth\n");
            printf("- Plan harvest schedules\n");
            printf("- Improve farm management\n");
            break;

        case 6:
            return;

        default:
            printf("Invalid input. Please enter a valid number.\n");
        }

        printf("\n------------------------------------------------------------\n");
        system("pause");

    } while(choice != 6);
}


/* ================= CROP FAQS ================= */

void cropFAQsMenu(){
    int choice;

    do {
        system("cls");

        printf("\n###################################################\n");
        printf("##                  CROP FAQs                    ##\n");
        printf("###################################################\n");

        printf("   [1] GRAINS\n");
        printf("   [2] VEGETABLES\n");
        printf("   [3] BACK\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                grainsmenu();
                break;

            case 2:
                vegetablesmenu();
                break;

            case 3:
                return;  // 👈 goes back to previous menu

            default:
                printf("Invalid choice!\n");
                system("pause");
        }

    } while(1);
}

void grainsmenu(){
    int choice;

    do {
        system("cls");

        printf("\n###################################################\n");
        printf("##                    GRAINS                     ##\n");
        printf("###################################################\n");
        printf("\nCORN\n");
        printf("   [1] Yellow Corn OPV\n");
        printf("   [2] Hybrid White Corn\n");
        printf("   [3] Sweet Corn\n");
        printf("   [4] Glutinous / Malagkit Corn\n");
        printf("\nRICE\n");
        printf("   [5] NSIC Rc 222 (Tubigan 18)\n");
        printf("   [6] PSB Rc 82 (Dorado)\n");
        printf("   [7] Native Red / Black Rice (Heirloom)\n\n");
        printf("[8] BACK\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                yellowcorn();
                break;

            case 2:
                whitecorn();
                break;

            case 3:
                sweetcorn();
                break;

             case 4:
                malagkitcorn();
                break;

            case 5:
                tubigan();
                break;

            case 6:
                dorado();
                break;

            case 7:
                heirloom();
                break;

            case 8:
                return;

            default:
                printf("Invalid choice!\n");
                system("pause");
        }

    } while(1);
}

void cabbageMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                    CABBAGE                    ##\n");
        printf("###################################################\n");
        printf("   [1] SCORPIO F1\n");
        printf("   [2] KK CROSS\n");
        printf("   [3] TROPICANA F1\n");
        printf("   [4] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: scorpioF1Cabbage(); break;
            case 2: kKCrossCabbage(); break;
            case 3: tropicanaF1Cabbage(); break;
            case 4: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void potatoMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                    POTATO                     ##\n");
        printf("###################################################\n");
        printf("   [1] GRANOLA\n");
        printf("   [2] DESIREE\n");
        printf("   [3] ATLANTIC\n");
        printf("   [4] IGOROTA - PO3\n");
        printf("   [5] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: granolaPotato(); break;
            case 2: desireePotato(); break;
            case 3: atlanticPotato(); break;
            case 4: igorotaPotato(); break;
            case 5: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void broccoliMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                   BROCCOLI                    ##\n");
        printf("###################################################\n");
        printf("   [1] GREEN MAGIC F1\n");
        printf("   [2] CHEVALIER F1\n");
        printf("   [3] MARATHON F1\n");
        printf("   [4] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: greenMagicF1(); break;
            case 2: chevalierF1(); break;
            case 3: marathonF1(); break;
            case 4: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void cauliflowerMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                 CAULIFLOWER                   ##\n");
        printf("###################################################\n");
        printf("   [1] CASSIUS F1\n");
        printf("   [2] WHITE FLASH F1\n");
        printf("   [3] SNOW CROWN\n");
        printf("   [4] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: cassiusF1(); break;
            case 2: whiteFlashF1(); break;
            case 3: snowCrown(); break;
            case 4: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void carrotMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                    CARROT                     ##\n");
        printf("###################################################\n");
        printf("   [1] NANTES\n");
        printf("   [2] CHANTENAY\n");
        printf("   [3] KURODA\n");
        printf("   [4] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: nantesCarrot(); break;
            case 2: chantenayCarrot(); break;
            case 3: kurodaCarrot(); break;
            case 4: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void chineseCabbageMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##               CHINESE CABBAGE                 ##\n");
        printf("###################################################\n");
        printf("   [1] WONG BOK / NAPA\n");
        printf("   [2] MICHIHILI\n");
        printf("   [3] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: wongBok(); break;
            case 2: michihili(); break;
            case 3: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void lettuceMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                   LETTUCE                     ##\n");
        printf("###################################################\n");
        printf("   [1] ICEBERG\n");
        printf("   [2] ROMAINE\n");
        printf("   [3] LOOSE-LEAF\n");
        printf("   [4] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: icebergLettuce(); break;
            case 2: romaineLettuce(); break;
            case 3: looseLeafLettuce(); break;
            case 4: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void tomatoMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                    TOMATO                     ##\n");
        printf("###################################################\n");
        printf("   [1] DIAMANTE MAX F1\n");
        printf("   [2] MARIKIT F1\n");
        printf("   [3] ROMA\n");
        printf("   [4] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: diamanteMaxF1(); break;
            case 2: marikitF1(); break;
            case 3: romaTomato(); break;
            case 4: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void eggplantMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                   EGGPLANT                    ##\n");
        printf("###################################################\n");
        printf("   [1] PINAKBET (LONG PURPLE)\n");
        printf("   [2] VIOLETA F1\n");
        printf("   [3] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: pinakbetEggplant(); break;
            case 2: violetaF1(); break;
            case 3: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void bitterGourdMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##             BITTER GOURD (AMPALAYA)           ##\n");
        printf("###################################################\n");
        printf("   [1] GALAXY F1\n");
        printf("   [2] STA. RITA (NATIVE TYPE)\n");
        printf("   [3] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: galaxyF1Ampalaya(); break;
            case 2: staRitaAmpalaya(); break;
            case 3: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void stringBeansMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##             STRINGBEANS (SITAW)               ##\n");
        printf("###################################################\n");
        printf("   [1] BAGUIO POLE SITAW\n");
        printf("   [2] BAGUIO BUSH SITAW\n");
        printf("   [3] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: baguioPoleSitaw(); break;
            case 2: baguioBushSitaw(); break;
            case 3: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void mungBeanMenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##              MUNG BEAN (MUNGGO)               ##\n");
        printf("###################################################\n");
        printf("   [1] NSIC Mg 5 (PAGASA 7)\n");
        printf("   [2] PAGASA 3 (LOCAL TYPE)\n");
        printf("   [3] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: nsicMg5(); break;
            case 2: pagasa3(); break;
            case 3: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void vegetablesmenu() {
    int choice;
    do {
        system("cls");
        printf("\n###################################################\n");
        printf("##                  VEGETABLES                   ##\n");
        printf("###################################################\n");
        printf("   [1]  CABBAGE\n");
        printf("   [2]  POTATO\n");
        printf("   [3]  BROCCOLI\n");
        printf("   [4]  CAULIFLOWER\n");
        printf("   [5]  CARROT\n");
        printf("   [6]  BELL PEPPER\n");
        printf("   [7]  CHINESE CABBAGE\n");
        printf("   [8]  LETTUCE\n");
        printf("   [9]  TOMATO\n");
        printf("   [10] EGGPLANT\n");
        printf("   [11] BITTER GOURD (AMPALAYA)\n");
        printf("   [12] STRINGBEANS (SITAW)\n");
        printf("   [13] MUNG BEAN (MUNGGO)\n");
        printf("   [14] BACK\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:  cabbageMenu(); break;
            case 2:  potatoMenu(); break;
            case 3:  broccoliMenu(); break;
            case 4:  cauliflowerMenu(); break;
            case 5:  carrotMenu(); break;
            case 6:  californiaWonder(); break;
            case 7:  chineseCabbageMenu(); break;
            case 8:  lettuceMenu(); break;
            case 9:  tomatoMenu(); break;
            case 10: eggplantMenu(); break;
            case 11: bitterGourdMenu(); break;
            case 12: stringBeansMenu(); break;
            case 13: mungBeanMenu(); break;
            case 14: return;
            default:
                printf("Invalid choice!\n");
                system("pause");
        }
    } while(1);
}

void pressAnyKey(){
    printf("\n\nPress any key to go back...");
    getch();
}

//---------GRAINS-----------------
void yellowcorn(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CORN - YELLOW CORN (OPV)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Zea mays (Open-pollinated variety)\n");
    printf("   Wind-pollinated, genetically diverse population\n");
    printf("   Low-cost seed system; seeds can be saved\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   95-110 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Fresh: 1-3 days | Dried: 6-12 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it suitable for Bukidnon soil?\n");
    printf("   A: Yes, it adapts well to upland clay soils.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, May-August\n\n");

    printf("6. REFERENCES\n");
    printf("   DA Corn Program, BPI-NSQCS, USM Studies\n");

    pressAnyKey();
}

void whitecorn(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CORN - HYBRID WHITE CORN (F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Zea mays (F1 hybrid)\n");
    printf("   High yield due to hybrid vigor\n");
    printf("   Commercial production crop\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   100-115 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Fresh: 1-2 days | Dried: 6-12 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does it need high fertilizer?\n");
    printf("   A: Yes, it requires intensive nutrient management.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   Pioneer PH, Bayer Crop Science, DA ATI\n");

    pressAnyKey();
}

void sweetcorn(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CORN - SWEET CORN (F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Zea mays var. saccharata\n");
    printf("   High sugar content hybrid corn\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   70-80 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 days | Chilled: 5-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why should it be harvested quickly?\n");
    printf("   A: Sugar converts to starch after harvest.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-May, October-November\n\n");

    printf("6. REFERENCES\n");
    printf("   East-West Seed, IRRI Maize Studies\n");

    pressAnyKey();
}

void malagkitcorn(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CORN - MALAGKIT (WAXY CORN)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Zea mays var. ceratina\n");
    printf("   Sticky starch (high amylopectin)\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-100 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Fresh: 1-2 days | Chilled: 3-5 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why does it spoil fast?\n");
    printf("   A: High moisture loss after harvest.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-August\n\n");

    printf("6. REFERENCES\n");
    printf("   IRRI, PRCRTC, East-West Seed\n");

    pressAnyKey();
}

void tubigan(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" NSIC Rc 222 (TUBIGAN 18)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Oryza sativa (inbred irrigated rice)\n");
    printf("   Stable yield under varying climate\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   106-114 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Milled: 6-12 months | Palay: 2-3 years\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it climate resilient?\n");
    printf("   A: Yes, stable in Bukidnon conditions.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July, November-December\n\n");

    printf("6. REFERENCES\n");
    printf("   PhilRice, IRRI, DA Rice Program\n");

    pressAnyKey();
}

void dorado(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" PSB Rc 82 (DORADO)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Oryza sativa (premium inbred rice)\n");
    printf("   High grain quality and milling recovery\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   110-118 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Milled rice: 6-12 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why is it high value?\n");
    printf("   A: Due to superior grain quality.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July, November-December\n\n");

    printf("6. REFERENCES\n");
    printf("   PhilRice DB, IRRI, DA Standards\n");

    pressAnyKey();
}

void heirloom(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" HEIRLOOM RED/BLACK RICE\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Oryza sativa (traditional landrace)\n");
    printf("   High antioxidants, genetic diversity\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   120-150 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 6 months | Chilled: 12 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why is it slower growing?\n");
    printf("   A: Higher nutrient accumulation.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   IRRI, ACIAR, CABI\n");

    pressAnyKey();
}

void scorpioF1Cabbage(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CABBAGE (SCORPIO F1 - ROUND HEAD)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Hybrid F1 cabbage with compact blue-green round heads.\n");
    printf("   Resistant to splitting and tolerant to wet highland climates.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   55-65 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 5-7 days | Refrigerated: 2-4 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it resistant to Black Rot?\n");
    printf("   A: Yes, strong field tolerance to Xanthomonas campestris.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   September-February\n\n");

    printf("6. REFERENCES\n");
    printf("   Allied Botanical Corporation\n");

    pressAnyKey();
}

void kKCrossCabbage(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CABBAGE (KK CROSS - FLAT HEAD)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 hybrid flat drumhead cabbage with heat tolerance.\n");
    printf("   Suitable for warmer transition zones in Bukidnon.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   55-60 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-5 days | Refrigerated: 1-3 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why choose flat head cabbage?\n");
    printf("   A: Better for cooking and faster growth cycle.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-April, October-November\n\n");

    printf("6. REFERENCES\n");
    printf("   Takii Seed\n");

    pressAnyKey();
}

void tropicanaF1Cabbage(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CABBAGE (TROPICANA F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Semi-flat hybrid cabbage with glossy light green heads.\n");
    printf("   Performs well in warm and cool upland conditions.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   60-80 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 4-6 days | Refrigerated: 2-3 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does it resist diseases?\n");
    printf("   A: Yes, good resistance to Black Rot.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, September-November\n\n");

    printf("6. REFERENCES\n");
    printf("   Holmes Seed Company\n");

    pressAnyKey();
}

void granolaPotato(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" POTATO (GRANOLA)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Medium-early table potato with yellow skin and flesh.\n");
    printf("   Highly adaptable to Bukidnon highland soils.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   75-90 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 weeks | Refrigerated: 2-3 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why do potatoes turn green?\n");
    printf("   A: Exposure to light causes solanine buildup.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-January\n\n");

    printf("6. REFERENCES\n");
    printf("   PotatoPro\n");

    pressAnyKey();
}

void desireePotato(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" POTATO (DESIREE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Red-skinned maincrop potato with versatile culinary use.\n");
    printf("   Drought tolerant and good for upland farms.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   90-110 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 weeks | Refrigerated: 3-5 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it blight resistant?\n");
    printf("   A: Moderate resistance; foliage still vulnerable.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-January\n\n");

    printf("6. REFERENCES\n");
    printf("   PotatoPro\n");

    pressAnyKey();
}

void atlanticPotato(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" POTATO (ATLANTIC)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Processing potato used for chips due to high starch.\n");
    printf("   Grown mainly under contract farming systems.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   100-110 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 weeks | Refrigerated: 3-5 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why not for local markets?\n");
    printf("   A: Too dry for boiling/mashed use.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   November-January\n\n");

    printf("6. REFERENCES\n");
    printf("   PotatoPro\n");

    pressAnyKey();
}

void igorotaPotato(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" POTATO (IGOROTA - PO3)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Philippine-bred highland potato with late blight resistance.\n");
    printf("   Dual-purpose for table and processing use.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   100-120 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-4 weeks | Refrigerated: 3-5 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it late blight resistant?\n");
    printf("   A: Yes, durable resistance.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-January\n\n");

    printf("6. REFERENCES\n");
    printf("   PotatoPro, ACIAR\n");

    pressAnyKey();
}

void greenMagicF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BROCCOLI (GREEN MAGIC F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 hybrid broccoli with heat tolerance and smooth domed heads.\n");
    printf("   Performs well in Bukidnon transitional climates.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   55-65 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 days | Refrigerated: 10-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does it turn purple in cold?\n");
    printf("   A: No, stays green even in cool nights.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   September-January\n\n");

    printf("6. REFERENCES\n");
    printf("   Sakata Seeds\n");

    pressAnyKey();
}

void chevalierF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BROCCOLI (CHEVALIER F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Late-maturing hybrid with large, dense premium heads.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   75-85 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 days | Refrigerated: 14-21 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: How is it different from Green Magic?\n");
    printf("   A: Larger heads but slower growth.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-January\n\n");

    printf("6. REFERENCES\n");
    printf("   Bejo Seeds\n");

    pressAnyKey();
}

void marathonF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BROCCOLI (MARATHON F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Cold-tolerant F1 hybrid with continuous side shoots.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   68-100 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 days | Refrigerated: 10-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Can it regrow after harvest?\n");
    printf("   A: Yes, produces side shoots.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-January\n\n");

    printf("6. REFERENCES\n");
    printf("   Johnny's Selected Seeds\n");

    pressAnyKey();
}

void cassiusF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CAULIFLOWER (CASSIUS F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   European-type hybrid with dense white curds.\n");
    printf("   Naturally self-blanching leaves.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-85 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-3 days | Refrigerated: 14-21 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does it need tying?\n");
    printf("   A: Usually no, leaves cover curd naturally.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-January\n\n");

    printf("6. REFERENCES\n");
    printf("   Cornell University\n");

    pressAnyKey();
}

void whiteFlashF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CAULIFLOWER (WHITE FLASH F1)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Fast-growing tropical hybrid with uniform white curds.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-70 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 days | Refrigerated: 10-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it heat tolerant?\n");
    printf("   A: Yes, performs well in warm transitions.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   September-January\n\n");

    printf("6. REFERENCES\n");
    printf("   Sakata Seeds\n");

    pressAnyKey();
}

void snowCrown(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CAULIFLOWER (SNOW CROWN)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Early-maturing hybrid with large white heads.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   50-70 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 days | Refrigerated: 7-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does it turn purple?\n");
    printf("   A: Slight tint under cold stress is normal.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-January\n\n");

    printf("6. REFERENCES\n");
    printf("   Gurney's Seeds\n");

    pressAnyKey();
}

void nantesCarrot(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CARROT (NANTES)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Coreless cylindrical carrot with sweet flavor.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-75 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-5 days | Refrigerated: 3-4 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why do carrots fork?\n");
    printf("   A: Rocky or uneven soil.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   Year-round\n\n");

    printf("6. REFERENCES\n");
    printf("   Johnny's Seeds\n");

    pressAnyKey();
}

void chantenayCarrot(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CARROT (CHANTENAY)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Short conical carrot suited for heavy soils.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-75 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 4-6 days | Refrigerated: 4-6 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: Can it grow in clay soil?\n");
    printf("   A: Yes, better than long carrots.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   Year-round\n\n");

    printf("6. REFERENCES\n");
    printf("   Seed Savers Exchange\n");

    pressAnyKey();
}

void kurodaCarrot(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CARROT (KURODA)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Heat-tolerant Asian carrot with deep orange roots.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   100-110 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 4-6 days | Refrigerated: 3-5 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it rain tolerant?\n");
    printf("   A: Yes, very suitable for wet climates.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   Year-round\n\n");

    printf("6. REFERENCES\n");
    printf("   Takii Seeds\n");

    pressAnyKey();
}

void californiaWonder(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BELL PEPPER (CALIFORNIA WONDER)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Heirloom bell pepper with thick, blocky fruits.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   70-85 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-4 days | Refrigerated: 7-12 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why not turning red?\n");
    printf("   A: Needs longer ripening time.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-May, October\n\n");

    printf("6. REFERENCES\n");
    printf("   Hoss Tools\n");

    pressAnyKey();
}

void wongBok(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CHINESE CABBAGE (WONG BOK / NAPA)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Hybrid napa cabbage with tight, sweet heads.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   55-80 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 days | Refrigerated: 2-4 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: What causes black spots?\n");
    printf("   A: Nitrogen imbalance.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-February\n\n");

    printf("6. REFERENCES\n");
    printf("   Sakata Seeds\n");

    pressAnyKey();
}

void michihili(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CHINESE CABBAGE (MICHIHILI)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Upright open-pollinated Chinese cabbage.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   70-75 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 days | Refrigerated: 7-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: More heat tolerant?\n");
    printf("   A: Yes, compared to Napa types.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   September-February\n\n");

    printf("6. REFERENCES\n");
    printf("   University Extension\n");

    pressAnyKey();
}

void icebergLettuce(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" LETTUCE (ICEBERG)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Crisphead lettuce forming dense spherical heads.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   75-90 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 days | Refrigerated: 2-3 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: What is tipburn?\n");
    printf("   A: Calcium deficiency during fast growth.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-February\n\n");

    printf("6. REFERENCES\n");
    printf("   UCANR\n");

    pressAnyKey();
}

void romaineLettuce(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" LETTUCE (ROMAINE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Upright lettuce with crisp thick ribs.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-75 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 days | Refrigerated: 7-12 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why bitter taste?\n");
    printf("   A: Water stress or heat exposure.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   Year-round\n\n");

    printf("6. REFERENCES\n");
    printf("   University of Florida IFAS\n");

    pressAnyKey();
}

void looseLeafLettuce(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" LETTUCE (LOOSE-LEAF)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Fast-growing lettuce harvested leaf-by-leaf.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   40-50 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1 day | Refrigerated: 5-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Can it regrow?\n");
    printf("   A: Yes, cut-and-come-again system.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   Year-round\n\n");

    printf("6. REFERENCES\n");
    printf("   UMN Extension\n");

    pressAnyKey();
}
void diamanteMaxF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" TOMATO - DIAMANTE MAX F1\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Determinate (bush-type) F1 Hybrid tomato.\n");
    printf("   Heat tolerant with high yield potential.\n");
    printf("   Resistant to Tomato Yellow Leaf Curl Virus (TYLCV).\n");
    printf("   Firm, oval-shaped fruits ideal for long-distance transport.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   55-65 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 7-10 days | Refrigerated: 14-21 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does this variety require heavy staking?\n");
    printf("   A: Provide a short stake or mulch bed to keep\n");
    printf("      fruit clusters off damp soil during rainy periods.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-February\n\n");

    printf("6. REFERENCES\n");
    printf("   East-West Seed Philippines, East-West Knowledge House\n");

    pressAnyKey();
}

void marikitF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" TOMATO - MARIKIT F1\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Intermediate-determinate F1 Hybrid tomato.\n");
    printf("   Thick-walled, round-to-oval, deep red saladette fruits.\n");
    printf("   Resistant to Bacterial Wilt and TYLCV.\n");
    printf("   Taller habit improves airflow and reduces foliar disease.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   60-70 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 5-7 days | Refrigerated: 10-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does Marikit F1 require pruning?\n");
    printf("   A: Remove suckers below the first flower cluster\n");
    printf("      to improve fruit size and reduce fungal risk.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-February\n\n");

    printf("6. REFERENCES\n");
    printf("   East-West Seed Philippines\n");

    pressAnyKey();
}

void romaTomato(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" TOMATO - ROMA (PROCESSING TYPE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) Determinate variety.\n");
    printf("   Thick-walled, egg-shaped fruits with low moisture.\n");
    printf("   Resistant to Verticillium and Fusarium wilts (Roma VF).\n");
    printf("   Ripens all at once, ideal for bulk processing.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   70-80 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 5-7 days | Refrigerated: 7-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it necessary to prune Roma tomatoes?\n");
    printf("   A: No. Do not prune suckers on determinate varieties\n");
    printf("      as it significantly reduces yield.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-February\n\n");

    printf("6. REFERENCES\n");
    printf("   Urban Farmer, Agriculture Monthly Philippines\n");

    pressAnyKey();
}

void pinakbetEggplant(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" EGGPLANT - PINAKBET (LONG PURPLE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) variety.\n");
    printf("   Slender, elongated fruits with deep violet skin.\n");
    printf("   Hardy, high-yielding over a long production period.\n");
    printf("   Well-suited to cool climates and volcanic soils.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-80 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-4 days | Refrigerated: 7-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why do fruits turn dull or brownish?\n");
    printf("   A: Over-maturity or lack of water. Harvest while\n");
    printf("      skin is still glossy to avoid pithy, bitter fruit.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, October-December\n\n");

    printf("6. REFERENCES\n");
    printf("   East-West Seed Philippines, PhilRice/DA-BAR\n");

    pressAnyKey();
}

void violetaF1(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" EGGPLANT - VIOLETA F1\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 Hybrid eggplant variety.\n");
    printf("   Glossy, deep purple-to-black skin, long cylindrical shape.\n");
    printf("   Excellent fruit setting even during the rainy season.\n");
    printf("   Strong field tolerance to Bacterial Wilt.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   60-70 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-5 days | Refrigerated: 10-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: How do I manage Shoot and Fruit Borer (SFB)?\n");
    printf("   A: Remove and bury infested shoots. Use pheromone\n");
    printf("      traps or fine mesh netting to reduce chemical use.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, October-December\n\n");

    printf("6. REFERENCES\n");
    printf("   East-West Seed, FarmChoice PH\n");

    pressAnyKey();
}

void galaxyF1Ampalaya(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BITTER GOURD - GALAXY F1\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 Hybrid ampalaya variety.\n");
    printf("   Thick, dark green, glossy fruits with prominent ridges.\n");
    printf("   Intermediate resistance to Downy Mildew and Cercospora.\n");
    printf("   Heavy, firm fruits resistant to bruising during transport.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   45-55 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 days | Refrigerated: 5-7 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why do flowers fall off without producing fruit?\n");
    printf("   A: Lack of pollinators or nitrogen imbalance. Plant\n");
    printf("      flowering herbs nearby or do manual pollination.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, May, October-November\n\n");

    printf("6. REFERENCES\n");
    printf("   Agrify PH, East-West Seed Knowledge House\n");

    pressAnyKey();
}

void staRitaAmpalaya(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BITTER GOURD - STA. RITA (NATIVE TYPE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) Native-style variety.\n");
    printf("   Shorter, spindle-shaped fruits with sharp warty ridges.\n");
    printf("   More intense bitterness and firmer flesh than hybrids.\n");
    printf("   Extremely hardy and adapted to local mountain conditions.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   50-60 days after transplanting\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-4 days | Refrigerated: 7-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it better to trellis or let it crawl?\n");
    printf("   A: Trellising is recommended to prevent fruit from\n");
    printf("      touching moist ground, which causes yellowing and rot.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-April, October-November\n\n");

    printf("6. REFERENCES\n");
    printf("   East-West Seed Philippines, GoEden Philippines\n");

    pressAnyKey();
}

void vsp2SweetPotato(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" SWEET POTATO - VSP-2 (ORANGE FLESH)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated improved variety.\n");
    printf("   Orange skin and bright orange flesh.\n");
    printf("   High beta-carotene content, sweet and moist texture.\n");
    printf("   Performs well in well-drained volcanic soils.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   100-110 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-4 weeks (cured) | Refrigerated: 1-2 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why are my tubers small and thin?\n");
    printf("   A: Avoid excess nitrogen after the first month and\n");
    printf("      ensure soil is loose and hilled up for tuber expansion.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   March-May, October-November\n\n");

    printf("6. REFERENCES\n");
    printf("   PhilRootcrops VSU, DA-Bureau of Plant Industry\n");

    pressAnyKey();
}

void imeldaSweetPotato(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" SWEET POTATO - IMELDA (WHITE FLESH)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated traditional-style variety.\n");
    printf("   Light-colored skin, creamy white starchy flesh.\n");
    printf("   High dry-matter content, excellent for boiling or frying.\n");
    printf("   Vigorous vines protect volcanic topsoil from erosion.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   100-120 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 weeks | Refrigerated: 1-2 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: How do I prevent Kamote Weevil damage?\n");
    printf("   A: Regularly hill up to seal soil cracks and keep\n");
    printf("      tubers deeply buried against weevil egg-laying.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   March-May, September-October\n\n");

    printf("6. REFERENCES\n");
    printf("   PhilRootcrops VSU, DA-Cagayan Valley, DOST-PCAARRD\n");

    pressAnyKey();
}

void nativeTurmeric(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" GINGER - NATIVE LUYANG DILAW (TURMERIC)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) perennial herb.\n");
    printf("   Bright orange-fleshed rhizomes with high curcumin content.\n");
    printf("   Earthy, peppery flavor. Thrives in volcanic highland soils.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   7-9 months (harvest when leaves yellow and dry)\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 weeks | Refrigerated: 1-2 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Can I harvest young turmeric early?\n");
    printf("   A: Yes, at 5-6 months for milder flavor. Wait 9 months\n");
    printf("      for maximum curcumin and medicinal potency.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   April-June\n\n");

    printf("6. REFERENCES\n");
    printf("   DOST-PCAARRD eLibrary, DA-Bureau of Plant Industry\n");

    pressAnyKey();
}

void bubodGinger(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" GINGER - BUBOD (WILD/NATIVE TYPE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) Wild/Native ginger variety.\n");
    printf("   Smaller, highly pungent, fibrous rhizomes.\n");
    printf("   Superior medicinal properties and intense aroma.\n");
    printf("   Resilient to cool climate, acidic soils, and high humidity.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   9-10 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-5 weeks | Refrigerated: 2-3 months\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does Bubod need full sun?\n");
    printf("   A: No. Thrives in 30-50%% shade. Planting under a\n");
    printf("      canopy prevents leaf scorch and rhizome drying.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   April-May\n\n");

    printf("6. REFERENCES\n");
    printf("   DOST-PCAARRD eLibrary, DA-BPI, SEARCA\n");

    pressAnyKey();
}

void greenSayote(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CHAYOTE - GREEN SAYOTE (COMMON)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) perennial vine.\n");
    printf("   Pear-shaped, light green fruit with mild crisp flavor.\n");
    printf("   Thrives at 1,000+ meters altitude in cool conditions.\n");
    printf("   Continuous harvest possible for 1-2 years.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   90-120 days (continuous harvest for 1-2 years)\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 7-10 days | Refrigerated: 2-3 weeks\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why do young fruits fall off or shrivel?\n");
    printf("   A: Poor pollination or sudden temperature drops.\n");
    printf("      Use a sturdy trellis and maintain consistent moisture.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   DA-Bureau of Plant Industry, DOST-PCAARRD eLibrary\n");

    pressAnyKey();
}

void whiteSayote(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CHAYOTE - WHITE SAYOTE\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) perennial vine variety.\n");
    printf("   Creamy-white to pale-ivory skin, smaller and smoother.\n");
    printf("   Slightly sweeter and more tender than the green variety.\n");
    printf("   High potassium requirement for pale color and crisp texture.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   100-120 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 5-7 days | Refrigerated: 14-18 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is White Sayote more sensitive to pests?\n");
    printf("   A: Yes. Thinner skin makes it prone to fruit fly and\n");
    printf("      scarring. Bag young fruits or use pheromone traps.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   DA-BPI, PCAARRD eLibrary, CABI Digital Library\n");

    pressAnyKey();
}

void baguioPoleSitaw(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" STRINGBEANS - BAGUIO POLE SITAW\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) climbing variety.\n");
    printf("   Bred for high-altitude environments.\n");
    printf("   Long, light-green pods with crisp texture.\n");
    printf("   Climbing habit keeps pods off moist soil.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   50-65 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 days | Refrigerated: 5-7 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: How do I manage Black Aphids in the highlands?\n");
    printf("   A: Use yellow sticky traps or neem-based sprays.\n");
    printf("      Monitor regularly as they multiply fast in cool weather.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, October-December\n\n");

    printf("6. REFERENCES\n");
    printf("   Allied Botanical Corporation (Condor Seeds)\n");

    pressAnyKey();
}

void baguioBushSitaw(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" STRINGBEANS - BAGUIO BUSH SITAW\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) non-climbing variety.\n");
    printf("   Compact shrub, about 40-60 cm tall.\n");
    printf("   Suited for high-wind areas where trellises may collapse.\n");
    printf("   Heavy feeder of phosphorus; matures rapidly.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   45-55 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 days | Refrigerated: 4-6 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it better to plant this than the pole variety?\n");
    printf("   A: Bush sitaw is better for quick cash flow with no\n");
    printf("      trellis cost, but has a shorter harvest window.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   January-March, October-November\n\n");

    printf("6. REFERENCES\n");
    printf("   PhilRice Vegetable Production Guides\n");

    pressAnyKey();
}

void nsicMg5(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" MUNG BEAN - NSIC Mg 5 (PAGASA 7)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Improved variety by Institute of Plant Breeding (IPB).\n");
    printf("   Dull green, medium-sized seeds with synchronous maturity.\n");
    printf("   Resistant to Cercospora Leaf Spot and Powdery Mildew.\n");
    printf("   Sturdy stalk prevents lodging during heavy rains.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   60-65 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 6-12 months (dry seeds in airtight containers)\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why is synchronous maturity important?\n");
    printf("   A: Allows harvest in just 1-2 pickings, significantly\n");
    printf("      reducing labor costs for highland farmers.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   February-April\n\n");

    printf("6. REFERENCES\n");
    printf("   IPB-UPLB Variety Catalog, DA-Bureau of Plant Industry\n");

    pressAnyKey();
}

void pagasa3(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" MUNG BEAN - PAGASA 3 (LOCAL TYPE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (OP) staple variety.\n");
    printf("   Shiny yellow-green seeds preferred by local markets.\n");
    printf("   Shattering-resistant pods even when harvest is delayed.\n");
    printf("   Adapts well to acidic volcanic soils with good drainage.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   65-70 days\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 6-12 months (keep dry to avoid weevils)\n\n");

    printf("4. FAQ\n");
    printf("   Q: Can I save seeds from my harvest to replant?\n");
    printf("   A: Yes. As an OP variety, select the healthiest seeds\n");
    printf("      as binhi (planting material) without losing variety quality.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   February-March, September-October\n\n");

    printf("6. REFERENCES\n");
    printf("   SEARCA, PhilRice Vegetable Guides\n");

    pressAnyKey();
}

void arabicaCoffee(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" COFFEE - ARABICA\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated perennial shrub.\n");
    printf("   Most sought-after species for superior cup quality.\n");
    printf("   Requires high altitude, cool temps, and volcanic soil.\n");
    printf("   Complex acidity and aromatic profile.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   3-4 years\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 6-12 months (green beans) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does Arabica require shade?\n");
    printf("   A: Yes. Shade-grown conditions protect leaves from\n");
    printf("      scorching and slow cherry ripening for better flavor.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-August\n\n");

    printf("6. REFERENCES\n");
    printf("   World Coffee Research, Coffee Research Institute\n");

    pressAnyKey();
}

void robustaCoffee(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" COFFEE - ROBUSTA\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Hardy Open-Pollinated species.\n");
    printf("   High caffeine content with strong, earthy flavor.\n");
    printf("   Resistant to Coffee Leaf Rust (CLR).\n");
    printf("   Productive in mid-elevation volcanic foothills.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   2-3 years\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 12-18 months (green beans) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is Robusta easier to maintain than Arabica?\n");
    printf("   A: Yes. More resilient to pests, diseases, and higher\n");
    printf("      temperatures while still benefiting from rich soil.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-August\n\n");

    printf("6. REFERENCES\n");
    printf("   World Coffee Research, Philippine Coffee Board\n");

    pressAnyKey();
}

void libericaCoffee(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" COFFEE - LIBERICA (BARAKO)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated species, grows into a large tree.\n");
    printf("   Largest beans of all coffee types.\n");
    printf("   Smoky, floral flavor profile.\n");
    printf("   Deep volcanic soil supports its extensive root system.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   4-5 years\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 12-18 months (green beans) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why is Liberica harder to harvest?\n");
    printf("   A: Trees can grow up to 18 meters tall, requiring\n");
    printf("      long ladders or regular pruning to manage height.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   Slow Food Foundation, NCBI\n");

    pressAnyKey();
}

void excelsaCoffee(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" COFFEE - EXCELSA\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated variety, classified under Liberica family.\n");
    printf("   Distinct teardrop-shaped bean.\n");
    printf("   Tart, fruity flavor profile used to add complexity to blends.\n");
    printf("   Highly drought-resistant across varied microclimates.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   4-5 years\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 12-18 months (green beans) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Can Excelsa handle the heavy rains of Bukidnon?\n");
    printf("   A: Yes. Remarkably resilient to both heavy rainfall\n");
    printf("      and drier spells, better than Arabica.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-August\n\n");

    printf("6. REFERENCES\n");
    printf("   Royal Botanic Gardens Kew, SA Dept. of Agriculture\n");

    pressAnyKey();
}

void vmc86550(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" SUGARCANE - VMC 86-550\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 Hybrid variety by Victorias Milling Company.\n");
    printf("   Very high and stable sucrose content.\n");
    printf("   Erect, self-detrashing habit reduces labor in cool conditions.\n");
    printf("   Favored for upland-to-intermediate elevations.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   11-12 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-5 days (stalks) | Refrigerated: 7-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it resistant to common pests?\n");
    printf("   A: Susceptible to Smut and Borers. Monitor fields\n");
    printf("      closely during humid months.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-February\n\n");

    printf("6. REFERENCES\n");
    printf("   PHILSURIN, ResearchGate\n");

    pressAnyKey();
}

void phil991268(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" SUGARCANE - PHIL 99-1268\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 Hybrid variety by Sugar Regulatory Administration (SRA).\n");
    printf("   Fast-growing, erect habit with high tonnage potential.\n");
    printf("   Quickly establishes root system suppressing weeds.\n");
    printf("   Widely adaptable across Mill Districts including Bukidnon.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   10-12 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-5 days | Refrigerated: 7-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does it perform well in high-tonnage targets?\n");
    printf("   A: Yes. Specifically bred for high TC/Ha and considered\n");
    printf("      widely adaptable across different Mill Districts.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   October-December\n\n");

    printf("6. REFERENCES\n");
    printf("   SRA-LAREC, International Journal of Multidisciplinary\n");

    pressAnyKey();
}

void binaluanSugarcane(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" SUGARCANE - BINALUAN (NATIVE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Native/Open-Pollinated noble cane (Saccharum officinarum).\n");
    printf("   Softer rinds suited for local chewing or muscovado production.\n");
    printf("   Hardy with adaptation to local microclimates.\n");
    printf("   Lower sugar yield than modern industrial hybrids.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   12-14 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-4 days | Refrigerated: 5-7 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why choose Binaluan over hybrids?\n");
    printf("   A: Preferred for resilience to fluctuating weather and\n");
    printf("      traditional home-scale use with fewer chemical inputs.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   CABI Digital Library, ResearchGate\n");

    pressAnyKey();
}

void cavendishBanana(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BANANA - CAVENDISH (DOLE MD-2)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Tissue Cultured F1 Hybrid Selection.\n");
    printf("   Uniform fruit size, resistant to internal browning.\n");
    printf("   Gold standard for export; high altitude slows ripening.\n");
    printf("   Volcanic soil provides high potassium for heavy bunch weight.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   9-11 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-7 days (once yellow) | Refrigerated: 7-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it resistant to Panama Disease (TR4)?\n");
    printf("   A: No. Highly susceptible to TR4. Strict biosecurity\n");
    printf("      and tissue-cultured planting materials are mandatory.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-August\n\n");

    printf("6. REFERENCES\n");
    printf("   ProMusa, Fruitrop, Dole\n");

    pressAnyKey();
}

void sabaBanana(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BANANA - SABA (CARDAVA)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (BBB Triploid) cooking banana.\n");
    printf("   Thick, angular fruits with starchy flesh.\n");
    printf("   Massive pseudostem is highly wind-resistant.\n");
    printf("   Thrives in deep soil with less intensive fertilization.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   12-15 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 7-10 days | Refrigerated: 10-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: What causes the fruit core to turn black or hard?\n");
    printf("   A: Bugtok disease (bacterial). Bag the fruit and\n");
    printf("      remove male bud immediately after last hand appears.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   ProMusa\n");

    pressAnyKey();
}

void latundanBanana(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BANANA - LATUNDAN (LADY FINGER)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated (AAB Group) dessert banana.\n");
    printf("   Thin skins with a distinctively tart, apple-like flavor.\n");
    printf("   Commonly grown in backyard lots or intercropped with coffee.\n");
    printf("   Cool climate preserves its delicate aroma.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   10-12 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-4 days | Refrigerated: 5-7 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why does the plant suddenly wilt and die?\n");
    printf("   A: Extremely susceptible to Fusarium Wilt Race 1.\n");
    printf("      Avoid replanting in infected areas.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-August\n\n");

    printf("6. REFERENCES\n");
    printf("   Banana Knowledge Platform (ProMusa)\n");

    pressAnyKey();
}

void fhia01Banana(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" BANANA - FHIA-01 (GOLDFINGER)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 Hybrid developed as a disease-proof banana alternative.\n");
    printf("   Multi-purpose: dessert or cooking use.\n");
    printf("   Resists Black Sigatoka and Panama Disease.\n");
    printf("   Ensures stable yields without heavy chemical use.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   12-14 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 5-8 days | Refrigerated: 7-12 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Does the fruit turn brown when sliced?\n");
    printf("   A: No. Unique non-browning trait makes it superior\n");
    printf("      for processing into fruit salads or dried chips.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   Musapedia (ProMusa)\n");

    pressAnyKey();
}

void smoothCayennePineapple(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" PINEAPPLE - SMOOTH CAYENNE (MD-2 / DOLE GOLD)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   F1 Hybrid Selection, industry standard for fresh export.\n");
    printf("   Exceptionally sweet, low-acid yellow flesh.\n");
    printf("   Uniform cylindrical shape with vibrant gold color.\n");
    printf("   High-altitude cool nights enhance sugar-to-acid ratio.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   14-18 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 3-5 days | Refrigerated: 7-10 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why is MD-2 preferred over original Smooth Cayenne?\n");
    printf("   A: Bred for lower acidity, consistent gold color, and\n");
    printf("      higher resistance to internal browning during shipping.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   April-July\n\n");

    printf("6. REFERENCES\n");
    printf("   Purdue University, ScienceDirect\n");

    pressAnyKey();
}

void queenPineapple(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" PINEAPPLE - QUEEN (NATIVE / FORMOSA)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated variety, known locally as Formosa.\n");
    printf("   Smaller than Cayenne with spiny leaves.\n");
    printf("   Deep yellow, very sweet, and crispy flesh.\n");
    printf("   Highly adapted to local pests; premium table fruit.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   12-15 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-4 days | Refrigerated: 5-7 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it hard to harvest because of the spines?\n");
    printf("   A: Yes. Very sharp serrated leaves make manual weeding\n");
    printf("      and harvesting more labor-intensive than Cayenne.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   DA Philippines, Prota4U\n");

    pressAnyKey();
}

void redSpanishPineapple(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" PINEAPPLE - RED SPANISH\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated hardy variety.\n");
    printf("   Reddish-orange skin with high fiber content.\n");
    printf("   Primarily valued for Pina cloth (textile) production.\n");
    printf("   Strong root system handles sloping volcanic terrain.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   15-18 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 5-7 days | Refrigerated: 10-14 days\n\n");

    printf("4. FAQ\n");
    printf("   Q: Why is this variety used for fiber instead of others?\n");
    printf("   A: Red Spanish leaves contain longer, stronger fibers\n");
    printf("      ideal for extracting threads for traditional Filipino attire.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   UNESCO, USDA GRIN\n");

    pressAnyKey();
}

void laylayAbaca(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" ABACA - LAYLAY (DAVAO VARIETY)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated selection.\n");
    printf("   Superior fiber quality with high tensile strength.\n");
    printf("   Produces long, white, and lustrous fibers.\n");
    printf("   Deep root system aids soil conservation on slopes.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   18-24 months (from planting to first harvest)\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 years (dry and bundled) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is Laylay resistant to Abaca Bunchy Top Virus?\n");
    printf("   A: No. Susceptible to ABTV. Monitor for aphids strictly\n");
    printf("      and use only virus-free planting materials.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   PhilFIDA\n");

    pressAnyKey();
}

void inosaAbaca(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" ABACA - INOSA (LEYTE VARIETY)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated selection.\n");
    printf("   Fast growth with high fiber yield.\n");
    printf("   Large pseudostems and broad leaves.\n");
    printf("   Quicker return on investment in fertile volcanic soil.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   16-20 months\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 1-2 years | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: How does Inosa handle heavy rainfall?\n");
    printf("   A: Very resilient to high moisture but requires\n");
    printf("      well-draining volcanic soil to prevent corm rot.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-August\n\n");

    printf("6. REFERENCES\n");
    printf("   ScienceDirect\n");

    pressAnyKey();
}

void cLedgeriana(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CINCHONA - C. LEDGERIANA (QUININE TREE)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated / Forest Species.\n");
    printf("   Highest concentration of quinine in its bark.\n");
    printf("   Primary species of the Lantapan Cinchona Reserve.\n");
    printf("   Requires 1,000+ meter altitude and cool misty conditions.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   8-12 years\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 years (dried bark) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is this the main species in the Lantapan reserve?\n");
    printf("   A: Yes. Introduced in the 1920s for its superior\n");
    printf("      bark yield for pharmaceutical use.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   CABI Compendium\n");

    pressAnyKey();
}

void cPubescens(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CINCHONA - C. PUBESCENS (RED CINCHONA)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated / Forest Species (Cinchona succirubra).\n");
    printf("   Larger, broader leaves that turn reddish with age.\n");
    printf("   Extremely hardy and fast-growing variety.\n");
    printf("   Historically used as rootstock for grafting high-yield types.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   10-15 months (initial growth) / 8-10 years (bark harvest)\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 years (dried bark) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Is it considered invasive?\n");
    printf("   A: In some regions, yes. In Bukidnon it is managed\n");
    printf("      within the reserve but requires monitoring.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   Global Invasive Species Database, ScienceDirect\n");

    pressAnyKey();
}

void cOfficinalis(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CINCHONA - C. OFFICINALIS\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated / Forest Species.\n");
    printf("   Original medicinal cinchona with smaller, narrower leaves.\n");
    printf("   Less common than C. ledgeriana in Lantapan.\n");
    printf("   Prefers higher, drier ridges with well-drained volcanic soil.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   8-12 years\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 years (dried bark) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: How is the bark harvested?\n");
    printf("   A: Trees are coppiced or strip-harvested in sections\n");
    printf("      to allow bark regeneration and tree survival.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   Kew Gardens, Britannica\n");

    pressAnyKey();
}

void cCalisaya(){
    system("cls");

    printf("\n------------------------------------------------------------\n");
    printf(" CINCHONA - C. CALISAYA (YELLOW BARK)\n");
    printf("------------------------------------------------------------\n");

    printf("1. TYPE & DESCRIPTION\n");
    printf("   Open-Pollinated / Forest Species.\n");
    printf("   Similar to C. ledgeriana; produces thick yellow bark.\n");
    printf("   Valued for its high proportion of alkaloids.\n");
    printf("   Susceptible to root-knot nematodes without proper management.\n\n");

    printf("2. PLANT TO HARVEST TIME\n");
    printf("   8-12 years\n\n");

    printf("3. SHELF LIFE\n");
    printf("   Room: 2-3 years (dried bark) | Refrigerated: N/A\n\n");

    printf("4. FAQ\n");
    printf("   Q: Can it grow in lowland Bukidnon?\n");
    printf("   A: No. Requires the cool temperatures and high humidity\n");
    printf("      of highland areas like Lantapan to produce alkaloids.\n\n");

    printf("5. BEST MONTHS TO PLANT\n");
    printf("   May-July\n\n");

    printf("6. REFERENCES\n");
    printf("   World Flora Online, StuartXchange\n");

    pressAnyKey();
}
