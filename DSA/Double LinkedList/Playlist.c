#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Song {
    char name[50];
    struct Song* next;
    struct Song* prev;
} Song;

Song* head = NULL;
Song* tail = NULL;
Song* current = NULL;

// Add song to playlist
void addSong(char* name) {
    Song* newSong = (Song*)malloc(sizeof(Song));
    strcpy(newSong->name, name);
    newSong->next = NULL;
    newSong->prev = tail;

    if (tail != NULL)
        tail->next = newSong;
    else
        head = newSong;

    tail = newSong;

    if (current == NULL)
        current = head;

    printf("🎶 '%s' added to playlist.\n", name);
}

// Play current song
void playCurrent() {
    if (current != NULL)
        printf("▶️ Now Playing: %s\n", current->name);
    else
        printf("⚠️ Playlist is empty.\n");
}

// Play next song
void playNext() {
    if (current != NULL && current->next != NULL) {
        current = current->next;
        playCurrent();
    } else {
        printf("⏭️ No next song.\n");
    }
}

// Play previous song
void playPrevious() {
    if (current != NULL && current->prev != NULL) {
        current = current->prev;
        playCurrent();
    } else {
        printf("⏮️ No previous song.\n");
    }
}

// Delete current song
void deleteCurrent() {
    if (current == NULL) {
        printf("⚠️ No song to delete.\n");
        return;
    }

    printf("🗑️ Deleting '%s'...\n", current->name);

    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;
    else
        tail = current->prev;

    Song* temp = current;
    if (current->next != NULL)
        current = current->next;
    else
        current = current->prev;

    free(temp);
    playCurrent();
}

// Display playlist
void displayPlaylist() {
    Song* temp = head;
    printf("\n📜 Playlist:\n");
    while (temp != NULL) {
        if (temp == current)
            printf("👉 %s (Current)\n", temp->name);
        else
            printf("   %s\n", temp->name);
        temp = temp->next;
    }
    printf("\n");
}

// Menu
int main() {
    int choice;
    char songName[50];

    do {
        printf("\n🎧 Music Playlist Menu:");
        printf("\n1. Add Song");
        printf("\n2. Play Current");
        printf("\n3. Play Next");
        printf("\n4. Play Previous");
        printf("\n5. Delete Current Song");
        printf("\n6. Display Playlist");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                printf("Enter song name: ");
                fgets(songName, sizeof(songName), stdin);
                songName[strcspn(songName, "\n")] = '\0'; // remove newline
                addSong(songName);
                break;
            case 2:
                playCurrent();
                break;
            case 3:
                playNext();
                break;
            case 4:
                playPrevious();
                break;
            case 5:
                deleteCurrent();
                break;
            case 6:
                displayPlaylist();
                break;
            case 7:
                printf("👋 Exiting Playlist Manager. Thank you!\n");
                break;
            default:
                printf("⚠️ Invalid choice. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}