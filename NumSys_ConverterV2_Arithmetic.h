#pragma once
#include "NumSys_ConverterV2.h"

char arith_operator;
//Convert Any Input into a Decimal in order to do arithmetic

void All_To_Dec1(std::string)
{
    if (numSys == 2)
    {
        std::stringstream ss;
        ss << std::hex << input1;
        ss >> decValue1;
    }
    if (numSys == 3)
    {
        int localNum = numValue1;
        int i = 0;
        while (localNum != 0)
        {
            int temp;
            temp = localNum % 10;
            localNum /= 10;
            decValue1 += temp * pow(2, i);
            i++;
        }
    }
    if (numSys == 4)
    {
        int octalNum = numValue1;
        int i{ 0 }, temp;
        while (octalNum != 0)
        {
            temp = octalNum % 10;
            octalNum /= 10;
            decValue1 += temp * pow(8, i);
            i++;
        }
    }
}void All_To_Dec2(std::string)
{
    if (numSys == 2)
    {
        std::stringstream ss;
        ss << std::hex << input2;
        ss >> decValue2;        
    }
    if (numSys == 3)
    {
        int localNum = numValue2;              
        int i = 0;
        while (localNum != 0)
        {
            int temp;
            temp = localNum % 10;
            localNum /= 10;
            decValue2 += temp * pow(2, i);
            i++;
        } 
    }
    if (numSys == 4)
    {
        int octalNum = numValue2;
        int i{ 0 }, temp;
        while (octalNum != 0)
        {
            temp = octalNum % 10;
            octalNum /= 10;
            decValue2 += temp * pow(8, i);
            i++;
        }        
    }
}

//Regular Operators
void add(int,int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 + decValue2;
    }
    else
    {
        result = numValue1 + numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " + " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}
void subtract(int, int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 - decValue2;
    }
    else
    {
        result = numValue1 - numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " - " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}
void multiply(int, int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 * decValue2;
    }
    else
    {
        result = numValue1 * numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " * " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}
void divide(int, int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 / decValue2;
    }
    else
    {
        result = numValue1 / numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " / " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}
void modulo(int, int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 % decValue2;
    }
    else
    {
        result = numValue1 % numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " % " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}

//Logic Operators
void AND(int, int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 & decValue2;
    }
    else
    {
        result = numValue1 & numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " AND " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}
void OR(int, int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 | decValue2;
    }
    else
    {
        result = numValue1 | numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " OR " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}
void XOR(int, int)
{
    if (numSys != 1)
    {
        All_To_Dec1(input1);
        All_To_Dec2(input2);
        result = decValue1 ^ decValue2;
    }
    else
    {
        result = numValue1 ^ numValue2;
    }
    result_string = std::to_string(result);
    std::cout << input1 << " ^ " << input2 << " = \n\n";
    Dec_Result(result);
    Dec_To_Bin_Result(result);
    Dec_To_Hex_Result(result);
    Dec_To_Oct_Result(result);
}
void NOT(int, int)
{
    All_To_Dec1(input1);
    All_To_Dec2(input2);
    int temp{ 0 };
    result = ~decValue1;
    temp = ~decValue2;
    result_string = std::to_string(result);
    temp_string = std::to_string(temp);
    std::cout << "NOT " << input1 << " = " << result << "\n";
    std::cout << "NOT " << input2 << " = " << temp << "\n\n";
}


