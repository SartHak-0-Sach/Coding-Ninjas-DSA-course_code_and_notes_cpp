void removeConsecutiveDuplicates(char input[])
{
    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] == input[i - 1])
        {
            input[i - 1] = ' ';
        }
    }
    int space = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ' ')
        {
            char tmp = input[i];
            input[i] = input[space];
            input[space] = tmp;
            space++;
        }
    }
}