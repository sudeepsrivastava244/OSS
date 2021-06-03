# include <stdio.h>
# include <string.h>

int main( )
{

    FILE *filePointer ;
    char dataToBeWritten[50]
        = "This is a file handling tutorial";
    filePointer = fopen("filehandling.txt", "w") ;
    if ( filePointer == NULL )
    {
        printf( "filehandling.cpp file failed to open." ) ;
    }
    else
    {
        printf("The file is now opened.\n") ;
        if ( strlen (  dataToBeWritten  ) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;
            fputs("\n", filePointer) ;
        }
        fclose(filePointer) ;

        printf("Data successfully written in file filehandling.txt\n");
        printf("The file is now closed.\n") ;

    }
    //READING DATA
    while( fgets ( dataToBeWritten, 50, filePointer ) != NULL )
        {
            // Print the dataToBeRead
            printf( "%s" , dataToBeWritten ) ;
         }
         fclose(filePointer) ;

        printf("Data successfully read from file filehandling.txt\n");
        printf("The file is now closed.") ;
    return 0;
}
