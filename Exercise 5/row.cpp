#include"row.h"
#include<iostream>
#include<cassert>
#include<cstring>

using namespace std;

row::row(const char* word, const char* meaning)
{
    if(strlen(word) <= 100 && strlen(meaning) <= 500)
    {
        this->word = new char[strlen(word) + 1];
        assert(this->word);
        strcpy(this->word, word);

        this->meaning = new char[strlen(meaning) + 1];
        assert(this->meaning);
        strcpy(this->meaning, meaning);
    }
    else
    {
        cout<<"Word is too long or meaning is too long!\n";
        word = NULL;
        meaning = NULL;
    }

}

row::row(const row& other)
{
    this->word = new char[strlen(other.word) + 1];
    assert(this->word);
    strcpy(this->word, other.word);

    this->meaning = new char[strlen(other.meaning) + 1];
    assert(this->meaning);
    strcpy(this->meaning, other.meaning);
}

row::~row()
{
    if(this->word)
    {
        delete[] word;
    }
    if(this->meaning)
    {
        delete[] meaning;
    }
}

row& row::operator=(const row& other)
{
    if(this != &other)
    {
        if(this->word)
        {
            delete[] word;
        }
        if(this->meaning)
        {
            delete[] meaning;
        }

        this->word = new char[strlen(other.word) + 1];
        assert(this->word);
        strcpy(this->word, other.word);

        this->meaning = new char[strlen(other.meaning) + 1];
        assert(this->meaning);
        strcpy(this->meaning, other.meaning);
    }
}

const char* row::get_word()const
{
    return word;
}

const char* row::get_meaning()const
{
    return meaning;
}

void row::set_word(const char* word)
{
    if(strlen(word) <= 100){
    if(strcmp(this->word, word) != 0)
    {
        if(this->word)
        {
            delete[] word;
        }
        this->word = new char[strlen(word) + 1];
        assert(this->word);
        strcpy(this->word, word);
    }
    } else{
        cout<<"Word is too long!\n";
    }
}

void row::set_meaning(const char* meaning)
{
    if(strlen(meaning) <= 500){
    if(strcmp(this->meaning, meaning) != 0)
    {
        if(this->meaning)
        {
            delete[] meaning;
        }
        this->meaning = new char[strlen(meaning) + 1];
        assert(this->meaning);
        strcpy(this->meaning, meaning);
    }
    } else{
        cout<<"Meaning is too long!\n";
    }
}


















