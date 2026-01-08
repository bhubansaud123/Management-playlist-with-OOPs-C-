#include <iostream>
#include <vector>
using namespace std;

class Song {
    string title, artist;
public:
    Song(string t, string a) : title(t), artist(a) {}
    void display() const {
        cout << title << " by " << artist << endl;
    }
};

class Playlist {
    vector<Song> songs;
public:
    void addSong(const Song& s) {
        songs.push_back(s);
    }
    void showPlaylist() const {
        if (songs.empty()) {
            cout << "Playlist is empty\n";
            return;
        }
        for (const auto& s : songs)
            s.display();
    }
};

int main() {
    Playlist playlist;
    playlist.addSong(Song("Shape of You", "Ed Sheeran"));
    playlist.addSong(Song("Believer", "Imagine Dragons"));
    playlist.showPlaylist();
    return 0;
}
