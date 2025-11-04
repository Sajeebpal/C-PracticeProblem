int rows;
    printf("Enter total rows number = ");
    scanf("%d", &rows);
    int temp = rows;
    
    for (int i = 1; i <= rows; i++)
    {
        // Counting spaces
        for (int s = (rows - i) * 3; s >= 1; s--)
        {
            printf(" ");
        }
        // Printing each row data
        for (int j = 1; j <= i; j++)
        {
            printf("%2d ", j); // each character is taking space of 3 white spaces
        }
        printf("\n");
    }