#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int main(int argc, char *argv[]) 
{
	Elf64_Ehdr elf_header;
	uint8_t magic[4];
	int file;
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        return 1;
    }

    file = open(argv[1], O_RDONLY);
    if (file == -1) {
        perror("Error opening file");
        return 1;
    }

    if (read(file, magic, sizeof(magic)) != sizeof(magic)) {
        fprintf(stderr, "Error reading file\n");
        close(file);
        return 1;
    }

    if (magic[0] != 0x7f || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F') {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(file);
        return 98;
    }

    lseek(file, 0, SEEK_SET);

    if (read(file, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        fprintf(stderr, "Error reading ELF header\n");
        close(file);
        return 1;
    }

    printf("Magic: %c%c%c%c\n", elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3]);
    printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);

    close(file);
    return 0;
}

