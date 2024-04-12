
int main(void)
{
    int numbers[] = {1, 54, 21, 32, 1, 21, 12};
    int n = get_int("Num: ");

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("found");
            return 0;
        }
    }
    printf("not found");
    return 0;
}