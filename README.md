# Inverted Search Engine in C

- A complete Inverted Search Engine implemented in C
- Indexes words from multiple text files
- Enables fast searching using hash tables and linked lists
- Demonstrates strong fundamentals of C programming and data structures

# Project Overview

- An Inverted Index maps each word to the files in which it appears
- Stores frequency of occurrence for each word per file
- Commonly used in search engines and information retrieval systems
- This project implements a mini search engine from scratch

# Applications

- Search engines
- Document indexing systems
- Database indexing
- Information retrieval systems

# What This Project Does

- Reads multiple input text files
- Extracts words from files
- Creates an inverted index
- Stores word counts file-wise
- Supports fast word searching
- Allows saving and reloading the database

# Features

- Multiple file processing
- Hash table based indexing
- Linked list collision handling
- Fast word search
- Word frequency tracking
- Database save to file
- Database reload support

# Data Structures Used

- Hash Table for efficient indexing
- Linked Lists for collision resolution
- Structures for database nodes

# Learning Outcomes

- Understanding of hashing techniques
- Practical implementation of collision handling
- Hands-on experience with file handling in C
- Modular program design
- Real-world search engine logic

# How to Run

- Clone the repository
- git clone https://github.com/gayathrikarasi-dev/inverted-search-c.git
- cd apc-in-c

- Compile the program
- gcc *.c -o inverted_search

- Run the program
- ./inverted_search

250046_INVERTED_SEARCH/
├─ images/
│  ├─ Create.png
│  ├─ Display.png
│  ├─ Errors.png
│  ├─ Save.png
│  ├─ Search.png
│  └─ Update.png
├─ include/
│  └─ inverted.h
├─ src/
│  ├─ create.c
│  ├─ display.c
│  ├─ inverted.c
│  ├─ main.c
│  ├─ save.c
│  ├─ search.c
│  └─ update.c
├─ database.txt
├─ f1.txt
├─ f2.txt
├─ f3.txt
├─ README.md
└─ .gitignore
