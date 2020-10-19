#include "NumSys_ConverterV2.h"
#include "NumSys_ConverterV2_Arithmetic.h"

int main()

{
    char selection{};
    do
    {
        char arith_select;
        std::cout << "Please select one of the following Number Systems: \n";
        std::cout << "(1) Decimal\t(2) Hexadecimal \t(3) Binary\t(4) Octal\n\n";
        std::cout << "Enter: "; std::cin >> numSys; std::cout << "\n";        
        std::cout << "Please enter a numeric value: "; std::cin >> input1; std::cout << "\n";
        std::cout << "Would you like to conduct arithmetic operations? (Y/N) "; std::cin >> arith_select; std::cout << "\n";
        std::stringstream placeHolder1(input1);
        placeHolder1 >> numValue1;
        

        if (arith_select == 'y' || arith_select == 'Y')
        {
            std::cout << "Enter one of the following operations :\n";
            std::cout << "[+]\t[-]\t[*]\t[/]\t[m] for MOD\t[a] for AND\t[o] for OR\t[x] for XOR\t[n] for NOT: "; std::cin >> arith_operator; std::cout << "\n";
            std::cout << "Enter a second number value: "; std::cin >> input2; std::cout << "\n";
            std::cout << "\n\n";
            std::stringstream placeHolder2(input2);
            placeHolder2 >> numValue2;
            
            switch (arith_operator)
            {
            case '+':
                add(decValue1, decValue2);

                break;
            case '-':
                subtract(decValue1, decValue2);
                break;
            case '*':
                multiply(decValue1, decValue2);
                break;
            case '/':
                divide(decValue1, decValue2);
                break;
            case 'm':
            case 'M':
                modulo(decValue1, decValue2);
                break;
            case 'a':
            case 'A':
                AND(decValue1, decValue2);
                break;
            case 'o':
            case 'O':
                OR(decValue1, decValue2);
                break;
            case 'x':
            case 'X':
                XOR(decValue1, decValue2);
                break;
            case 'n':
            case 'N':
                NOT(decValue1, decValue2);
                break;
            }
        }
        
              

        if (arith_select == 'n' || arith_select == 'N')
        {            
            switch (numSys)
            {
            case 1:
                Dec_To_Hex(input1);
                Dec_To_Bin(input1);
                Dec_To_Oct(input1);
                break;
            case 2:
                Hex_To_Dec(input1);
                Hex_To_Bin(input1);
                Hex_To_Oct(input1);
                break;
            case 3:
                Bin_To_Dec(input1);
                Bin_To_Hex(input1);
                Bin_To_Oct(input1);
                break;
            case 4:
                Oct_To_Dec(input1);
                Oct_To_Hex(input1);
                Oct_To_Bin(input1);
                break;
            }
        }
        std::cout << "Calculate another? (Y/N) : ";
        std::cin >> selection;
        std::cout << "\n\n";      
    } while (selection == 'y' || selection == 'Y');

}
    


