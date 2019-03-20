#pragma once

class row{
private:
    char* word;
    char* meaning;

public:
    row(const char* = "", const char* = "");
    row(const row&);
    ~row();
    row& operator=(const row&);
    const char* get_word() const;
    const char* get_meaning() const;
    void set_word(const char*);
    void set_meaning(const char*);
};
