#include<stdio.h>

int main(){
    FILE *fp = fopen("test.txt","r");
    if(fp==NULL){
        printf("error while opening file ");
        return 1;
    }

    char ch,prev = ' ';

    int word_count = 0;
    while((ch =fgetc(fp))!= EOF){
        if((prev == ' ' || prev == '\n' || prev == '\t')&&(ch != ' ' || ch != '\n' || ch != '\t')){
            word_count++;
        }
        prev = ch;
    }
   
    printf("the total number of words in that file is %d\n",word_count);
    return 0;
}


// improve the program Characters ,Words, Lines 

// single program


// file copy 



/*

here is what i will do 
1. File swapping (like a number swapper)

Conceptually, to swap the contents of two files:

Read all data from File A into a temporary buffer.

Read all data from File B into another temporary buffer (or reuse the first buffer carefully).

Write the content of Buffer B into File A, and Buffer A into File B.

Yes, fprintf is for writing formatted text, so you can use it to write strings or characters back into a file.

2. i can write file copy as well ask 
the user for the source file and destination file and  copy them 





Perfect! You’re already thinking exactly like a Stage 2 pro 😄. Here are 3 simple, doable ideas you can implement right now, building on what you know:

1. cat clone

Ask the user for a filename.

Open the file and print its contents to the console.

Optional: allow multiple filenames and print them sequentially (like real cat).

2. File copy

Ask the user for source and destination filenames.

Read from the source file, write to the destination file.

Can do character by character (fgetc + fputc) or in chunks using a buffer.

3. File append / merge

Ask the user for two files: source and destination.

Append the contents of the source file to the end of the destination file.

This is a simple variation of file copy, but you use "a" mode for writing.

Other small ideas you can try next:

Count characters/words/lines (your mini “wc” program)

Reverse the content of a file and write to a new file

Simple file encryption: XOR each character with a key
*/