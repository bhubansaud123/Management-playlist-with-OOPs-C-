# Playlist Management System using C++

This project demonstrates a **simple playlist management system** implemented using **Object-Oriented Programming (OOP) concepts in C++**.
It allows users to add songs to a playlist and display them in an organized manner.

---

## 📌 Objective

To understand and implement:
- Classes and objects
- Composition (using one class inside another)
- STL `vector`
- Passing objects by reference
- `const` member functions

---

## 🧠 Concepts Used

- Class and Object  
- Encapsulation  
- Composition  
- Standard Template Library (STL)  
- `vector` container  
- `const` correctness  

---

## 🧾 Program Description

- The `Song` class stores song details such as **title** and **artist**
- The `Playlist` class maintains a list of songs using a `vector`
- Songs are added dynamically to the playlist
- The playlist can be displayed in the order songs were added
- Handles the case when the playlist is empty

---

## 🧩 Class Structure

### Class: `Song`
- **Data Members**
  - `string title`
  - `string artist`
- **Member Function**
  - `void display() const`

### Class: `Playlist`
- **Data Member**
  - `vector<Song> songs`
- **Member Functions**
  - `void addSong(const Song& s)`
  - `void showPlaylist() const`

---

## ▶️ Sample Input (From Code)

```cpp
playlist.addSong(Song("Shape of You", "Ed Sheeran"));
playlist.addSong(Song("Believer", "Imagine Dragons"));
