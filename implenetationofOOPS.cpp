#include <iostream>
#include <string>
using namespace std;

// ================= BASE CLASS =================
class Library {
protected:
    string libraryName;

public:
    Library(string name) {
        libraryName = name;
    }

    void displayName() {
        cout << "Library Name: " << libraryName << endl;
    }

    // Runtime Polymorphism
    virtual void showLibraryType() {
        cout << "This is a General Library." << endl;
    }

    virtual void accessLibrary() {
        cout << "Accessing General Library Services." << endl;
    }

    virtual ~Library() {}
};

// ================= COMPILE-TIME POLYMORPHISM =================
class SearchLibrary {
public:

    // Function Overloading
    void search(string name) {
        cout << "Searching Library by Name: "
             << name << endl;
    }

    void search(int id) {
        cout << "Searching Library by ID: "
             << id << endl;
    }

    void search(string name, int id) {
        cout << "Searching Library: "
             << name << " with ID: "
             << id << endl;
    }
};

// ================= BOOK LIBRARY =================
class BookLibrary : public Library {
public:
    BookLibrary(string name) : Library(name) {}

    void issueBook() {
        cout << "Book Issued Successfully." << endl;
    }

    void showLibraryType() override {
        cout << "This is a Book Library." << endl;
    }

    void accessLibrary() override {
        cout << "Accessing Book Library Services." << endl;
    }
};

// ================= MUSIC LIBRARY =================
class MusicLibrary : public Library {
public:
    MusicLibrary(string name) : Library(name) {}

    void playMusic() {
        cout << "Playing Music Collection." << endl;
    }

    void showLibraryType() override {
        cout << "This is a Music Library." << endl;
    }

    void accessLibrary() override {
        cout << "Accessing Music Library Services." << endl;
    }
};

// ================= DIGITAL LIBRARY =================
class DigitalLibrary : public Library {
public:
    DigitalLibrary(string name) : Library(name) {}

    void accessEBooks() {
        cout << "Accessing Digital Resources." << endl;
    }

    void showLibraryType() override {
        cout << "This is a Digital Library." << endl;
    }

    void accessLibrary() override {
        cout << "Accessing Digital Library Services." << endl;
    }
};

// ================= MULTILEVEL INHERITANCE =================
class PremiumMusicLibrary : public MusicLibrary {
public:
    PremiumMusicLibrary(string name)
        : MusicLibrary(name) {}

    void downloadSongs() {
        cout << "Downloading Premium Songs." << endl;
    }

    void showLibraryType() override {
        cout << "This is a Premium Music Library." << endl;
    }

    void accessLibrary() override {
        cout << "Accessing Premium Music Library Services." << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    BookLibrary b1("City Book Library");
    MusicLibrary m1("Melody Music Library");
    DigitalLibrary d1("Smart Digital Library");
    PremiumMusicLibrary p1("Premium Music Hub");

    cout << "\n===== BOOK LIBRARY =====" << endl;
    b1.displayName();
    b1.issueBook();

    cout << "\n===== MUSIC LIBRARY =====" << endl;
    m1.displayName();
    m1.playMusic();

    cout << "\n===== DIGITAL LIBRARY =====" << endl;
    d1.displayName();
    d1.accessEBooks();

    cout << "\n===== PREMIUM MUSIC LIBRARY =====" << endl;
    p1.displayName();
    p1.playMusic();
    p1.downloadSongs();

    // Compile-Time Polymorphism
    cout << "\n===== COMPILE-TIME POLYMORPHISM =====" << endl;

    SearchLibrary s1;
    s1.search("Central Library");
    s1.search(101);
    s1.search("Music Library", 202);

    // Run-Time Polymorphism
    cout << "\n===== RUN-TIME POLYMORPHISM =====" << endl;

    Library* ptr;

    ptr = &b1;
    ptr->showLibraryType();
    ptr->accessLibrary();

    cout << endl;

    ptr = &m1;
    ptr->showLibraryType();
    ptr->accessLibrary();

    cout << endl;

    ptr = &d1;
    ptr->showLibraryType();
    ptr->accessLibrary();

    cout << endl;

    ptr = &p1;
    ptr->showLibraryType();
    ptr->accessLibrary();

    return 0;
}