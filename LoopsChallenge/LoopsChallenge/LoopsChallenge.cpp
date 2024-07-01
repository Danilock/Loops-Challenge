# include <iostream>

void Input();
void PrintFactors(int number);

int main(int argc, char* argv[])
{
    Input();
    
    return 0;
}

void Input()
{
    int number;
    
    std::cout << "Type a number greater than Zero: ";
    std::cin >> number;

    if(number < 0)
    {
        std::cout << "Number must be greater than zero." << std::endl << "==============================" << std::endl;
        Input();
    }

    PrintFactors(number);
}

void PrintFactors(int number)
{
    for(int i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            std::cout << i << " | ";
        }
    }
}
