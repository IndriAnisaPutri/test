#include <stdio.h>
#include <math.h>
#include <cstring>
#define MP_I 3.14159

char changeFormula;

void groupName()
{
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("|         Group 15 programming practicum :       |\n");
    printf("|------------------------------------------------|\n");
    printf("| Bagus Jagra Wicaksana             (2305551005) |\n");
    printf("| I Putu Rama Dita                  (2305551017) |\n");
    printf("| Kadek Indri Anisa Putri           (2305551062) |\n");
    printf("| I Gusti Ayu Tiksna Apsari         (2305551066) |\n");
    printf("| Karin Vallerine Sidaluwu          (2305551088) |\n");
    printf("| Nyoman Danendra Widy Pradnya      (2305551155) |\n");
    printf("| I Putu Hendra Aditya Jayasantika  (2305551158) |\n");
    printf("|--------------------------------------------|\n");
    printf("\n");
}

int inputCheck(double *input)
{
    char num[100];
    while (1)
    {
        if (scanf("%99[^\n]%*c", num) != 1)
        {
            printf("Input invalid, Please input a number, please repeat again: ");
            while (getchar() != '\n')
            {
                // clear buffer input
            }
        }
        else
        {
            char *endptr;
            *input = strtof(num, &endptr);
            if (*endptr == '\0' && *input > 0)
            {
                return *input;
            }
            else
            {
                printf("Input invalid, Please input a number, please repeat again: ");
            }
        }
    }
}
void formulaSwitch(char *changeFormula)
{
    do
    {
        printf(" Choice between This : \n ");
        printf(" (A).Area : \n ");
        printf(" (P).Perimeter : \n ");
        printf(" Choose : ");
        scanf(" %c", changeFormula);

        switch (*changeFormula)
        {
        case 'A':
        case 'P':
            return;
        default:
            printf("Invalid choice. Please enter 'A' for Area or 'P' for Perimeter.\n");
        }
    } while (1);
}

int anyTriangle()
{
    double side_a, side_b, side_c, semiperimeter, area, perimeter;

    printf(" ================ Calculating the Area and Perimeter of Any Triangle ================  \n");
    printf(" ====================================================================================  \n");

    printf("     /\\    \n");
    printf("    /  \\  \n");
    printf("   /    \\  \n");
    printf("  /______\\  \n");

    printf(" Enter the Value of side_a : ");
    inputCheck(&side_a);
    printf(" Enter the Value of side_b : ");
    inputCheck(&side_b);
    printf(" Enter the Value of side_c : ");
    inputCheck(&side_c);

    formulaSwitch(&changeFormula);

    switch (changeFormula)
    {
    case 'A':
        semiperimeter = (side_a + side_b + side_c) / 2;
        area = sqrt(semiperimeter * (semiperimeter - side_a) * (semiperimeter - side_b) * (semiperimeter - side_c));
        printf(" ====== Result ===== \n");
        printf(" area = A = √(s * (s - a) * (s - b) * (s - c) : \n");
        printf(" area = %g\n\n", area);
        break;
    case 'P':
        perimeter = side_a + side_b + side_c;
        printf(" ====== Result ===== \n");
        printf(" perimeter = side_a + side_b + side_c : \n");
        printf(" perimeter = %g\n", perimeter);
        break;
    default:
        printf(" Wrong Case , please input a valid : ");
        break;
    }
    return 0;
}

int rhombus()
{

    double diagonal1, diagonal2, side_length, area, perimeter;

    printf(" ================ Calculating the Area and Perimeter of Rhombus ================  \n");
    printf(" =========================================================================================  \n");

    printf("     //\\    \n");
    printf("    //  \\  \n");
    printf("   //    \\  \n");
    printf("  //      \\  \n");
    printf("  \\      //  \n");
    printf("   \\    //  \n");
    printf("    \\  //  \n");
    printf("     \\//  \n");

    printf(" Enter Diagonal 1 value : ");
    inputCheck(&diagonal1);
    printf(" Enter Diagonal 2 value : ");
    inputCheck(&diagonal2);
    printf(" Enter side length value : ");
    inputCheck(&side_length);

    formulaSwitch(&changeFormula);

    switch (changeFormula)
    {
    case 'A':
        area = 0.5 * (diagonal1 * diagonal2);
        printf(" ====== Result ===== \n");
        printf(" area = 1/2 * (diagonal1 * diagonal2) : \n");
        printf(" area = %g\n\n", area);
        break;
    case 'P':
        perimeter = 4 * side_length;
        printf(" ====== Result ===== \n");
        printf(" perimeter = 4 * (side_length): \n");
        printf(" perimeter = %g\n", perimeter);
        break;
    default:
        printf(" Wrong Case , please input a valid : ");
        break;
    }

    return 0;
}

int paralleLogram()
{
    double base, height, area, perimeter;

    printf(" ================ Calculating the Area and Perimeter of Parallelogram ===================  \n");
    printf(" =========================================================================================  \n");
    printf("        ******************\n");
    printf("      *                 *\n");
    printf("    *                *\n");
    printf("  *                *\n");
    printf(" ******************\n");

    printf(" Enter base value : ");
    inputCheck(&base);
    printf(" Enter height value : ");
    inputCheck(&height);

    formulaSwitch(&changeFormula);

    switch (changeFormula)
    {
    case 'A':
        area = base * height;
        printf(" ====== Result ===== \n");
        printf(" area = base * height : \n");
        printf(" area = %g\n\n", area);
        break;
    case 'P':
        perimeter = 2 * (base + height);

        printf(" ====== Result ===== \n");
        printf(" perimeter = 2 * (base + height) : \n");
        printf(" perimeter = %g\n", perimeter);
        break;
    default:
        printf(" Wrong Case , please input a valid : ");
        break;
    }

    return 0;
}

int trapezium()
{
    double longer_base_a, longer_base_b, shorter_base_c, shorter_base_d, height, area, perimeter;

    printf(" ================== Calculating the Area and Perimeter of Trapezium ======================  \n");
    printf(" =========================================================================================  \n");
    printf("        ****************\n");
    printf("      *                  *\n");
    printf("    *                     *\n");
    printf("  *                         *\n");
    printf(" *****************************\n");

    printf(" Enter the length of the longer base (a): ");
    inputCheck(&longer_base_a);
    printf(" Enter the length of the longer base (b): ");
    inputCheck(&longer_base_b);
    printf(" Enter the length of not the longer base (c): ");
    inputCheck(&shorter_base_c);
    printf(" Enter the length of the other not longer base (d): ");
    inputCheck(&shorter_base_d);
    printf(" Enter the height base (h): ");
    inputCheck(&height);

    formulaSwitch(&changeFormula);

    switch (changeFormula)
    {
    case 'A':
        area = 0.5 * (longer_base_a + longer_base_b) * height;

        printf(" ====== Result ===== \n");
        printf(" area = 1/2 * (a + b) * h : \n");
        printf(" area = %g\n\n", area);
        break;
    case 'P':
        perimeter = longer_base_a + longer_base_b + shorter_base_c + shorter_base_d;

        printf(" ====== Result ===== \n");
        printf(" perimeter = a + b + c + d : \n");
        printf(" perimeter = %g\n", perimeter);
        break;
    default:
        printf(" Wrong Case , please input a valid : ");
        break;
    }

    return 0;
}

int circle()
{
    double radius, area, circumference;

    printf(" ==================== Calculating the Area and Perimeter of Circle =======================  \n");
    printf(" =========================================================================================  \n");

    printf(" Enter the radius of Circle : ");
    inputCheck(&radius);

    formulaSwitch(&changeFormula);

    switch (changeFormula)
    {
    case 'A':
        area = MP_I * radius * radius;
        printf(" ====== Result ===== \n");
        printf(" area = π * r^2 : \n");
        printf(" area = %g\n\n", area);
        break;
    case 'P':
        circumference = 2 * MP_I * radius;

        printf(" ====== Result ===== \n");
        printf(" circumference = 2 * π * r : \n");
        printf(" circumference = %g\n", circumference);
        break;
    default:
        printf(" Wrong Case , please input a valid : ");
        break;
    }

    return 0;
}

int main()
{
    char choice;
    char bufferInput[256];
    groupName();
    printf(" Program to calculate the area and perimeter of flat shapes:\n");
    printf(" Choose one of the shapes:\n");
    printf(" 1. Triangle\n");
    printf(" 2. Rhombus\n");
    printf(" 3. Parallelogram\n");
    printf(" 4. Trapezium\n");
    printf(" 5. Circle\n");

    do{
        
        int invalidChoice = 0;
        printf(" Enter your choice (1-5) or q to exit: ");
        fgets(bufferInput, sizeof(bufferInput), stdin);

        size_t vlength = strlen(bufferInput);
        if (vlength > 0 && bufferInput[vlength - 1] == '\n'){
            bufferInput[vlength - 1] = '\0';
        }

        if (strlen(bufferInput) == 1){
            sscanf(bufferInput, " %c", &choice);

            switch (choice)
            {
            case '1':
                anyTriangle();
                break;

            case '2':
                rhombus ();
                break;

            case '3':
                paralleLogram();
                break;

            case '4':
                trapezium();
                break;

            case '5':
                circle();
                break;

            case 'q':
                return 0;

            default:
                printf(" Input invalid. Please input the correct option (1-5 or q to exit). \n ");
                invalidChoice = 1;
            }
        }
    } while (choice != 'q');

    return 0;
}