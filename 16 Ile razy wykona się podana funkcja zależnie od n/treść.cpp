int MYSTERious_function(int n)
{
    if(n <= 1) return 1;
    return n * MYSTERious_function(n - 1);
}