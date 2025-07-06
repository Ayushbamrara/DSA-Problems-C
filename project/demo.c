#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define FILE_NAME "users.txt"

struct User {
    char username[30];
    char password[30];
};

// Function Prototypes
void registerUser();
int loginUser();
void adminPanel();
void viewUsers();

int main() {
    int choice;

    while (1) {
        printf("\n--- USER MANAGEMENT SYSTEM ---\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Admin Panel (Login as Admin)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // flush newline

        switch (choice) {
            case 1: registerUser(); break;
            case 2:
                if (loginUser())
                    printf("Login successful!\n");
                else
                    printf("Login failed. Check username/password.\n");
                break;
            case 3: adminPanel(); break;
            case 4: exit(0);
            default: printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void registerUser() {
    struct User user;
    FILE *fp = fopen(FILE_NAME, "a");

    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter new username: ");
    fgets(user.username, sizeof(user.username), stdin);
    user.username[strcspn(user.username, "\n")] = 0;

    printf("Enter new password: ");
    fgets(user.password, sizeof(user.password), stdin);
    user.password[strcspn(user.password, "\n")] = 0;

    fwrite(&user, sizeof(struct User), 1, fp);
    fclose(fp);

    printf("User registered successfully!\n");
}

int loginUser() {
    struct User user;
    char uname[30], pass[30];
    FILE *fp = fopen(FILE_NAME, "r");

    if (!fp) {
        printf("No users found.\n");
        return 0;
    }

    printf("Enter username: ");
    fgets(uname, sizeof(uname), stdin);
    uname[strcspn(uname, "\n")] = 0;

    printf("Enter password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0;

    while (fread(&user, sizeof(struct User), 1, fp)) {
        if (strcmp(user.username, uname) == 0 && strcmp(user.password, pass) == 0) {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}

void adminPanel() {
    char adminUser[20], adminPass[20];
    printf("\n--- Admin Login ---\n");

    printf("Username: ");
    fgets(adminUser, sizeof(adminUser), stdin);
    adminUser[strcspn(adminUser, "\n")] = 0;

    printf("Password: ");
    fgets(adminPass, sizeof(adminPass), stdin);
    adminPass[strcspn(adminPass, "\n")] = 0;

    if (strcmp(adminUser, "admin") == 0 && strcmp(adminPass, "admin123") == 0) {
        int choice;
        printf("Admin login successful!\n");

        do {
            printf("\n--- ADMIN PANEL ---\n");
            printf("1. View All Users\n");
            printf("2. Exit Admin Panel\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            getchar();

            switch (choice) {
                case 1: viewUsers(); break;
                case 2: printf("Exiting admin panel.\n"); break;
                default: printf("Invalid option.\n");
            }
        } while (choice != 2);
    } else {
        printf("Invalid admin credentials.\n");
    }
}

void viewUsers() {
    struct User user;
    FILE *fp = fopen(FILE_NAME, "r");

    if (!fp) {
        printf("No user data found.\n");
        return;
    }

    printf("\n--- REGISTERED USERS ---\n");

    while (fread(&user, sizeof(struct User), 1, fp)) {
        printf("Username: %s\n", user.username);
    }

    fclose(fp);
}
